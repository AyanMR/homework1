//
// Created by AyanMR on 25-5-4.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Ranking.h" resolved
#pragma execution_character_set("utf-8")
#include "ranking.h"
#include "ui_Ranking.h"
#include "FindnStudent.h"
#include <memory>

Ranking::Ranking(QWidget *parent) : QWidget(parent), ui(new Ui::Ranking)
{
    ui->setupUi(this);
    connect(ui->pushButton_2, &QPushButton::clicked, this, [&]() {
        auto mainWindow = new MainWindow();
        mainWindow->show();
        this->setAttribute(Qt::WA_DeleteOnClose);
        this->close();
    });
    connect(ui->pushButton, &QPushButton::clicked, this, [&]() {
        bool flag;
        auto n = ui->textEdit->toPlainText().toLongLong(&flag);
        if (!flag || n <= 0)
            return;
        QString dbPath = QDir::currentPath() + "/../db/students.db";
        std::vector<student> students = findn(dbPath, n);
        for (auto &i: students)
        {
            qDebug() << i.id << i.name << i.classid << i.score;
        }
        auto model = new QStandardItemModel(this);
        QStringList headers;
        ui->tableView->setModel(model);
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        headers << QString::fromUtf8("学号") << QString::fromUtf8("姓名") << QString::fromUtf8("班级") <<
                QString::fromUtf8("分数");
        model->setColumnCount(4);
        model->setHorizontalHeaderLabels(headers);
        for (const auto &s: students)
        {
            QList<QStandardItem *> row;
            row << new QStandardItem(QString::number(s.id))
                    << new QStandardItem(s.name)
                    << new QStandardItem(QString::number(s.classid))
                    << new QStandardItem(QString::number(s.score));
            model->appendRow(row);
        }
        ui->tableView->setModel(model);
    });
}

Ranking::~Ranking()
{
    delete ui;
}
