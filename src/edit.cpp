//
// Created by AyanMR on 25-5-4.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Edit.h" resolved

#include "../include/edit.h"
#include "getStudent.h"
#include "sort.h"
#include "ui_Edit.h"

Edit::Edit(QWidget *parent) : QWidget(parent), ui(new Ui::Edit)
{
    ui->setupUi(this);
    connect(ui->pushButton_2, &QPushButton::clicked, this, [&]() {
        auto mainWindow = new MainWindow();
        mainWindow->show();
        this->setAttribute(Qt::WA_DeleteOnClose);
        this->close();
    });
    connect(ui->pushButton, &QPushButton::clicked, [&]() {
        QString dbPath = QDir::currentPath() + "/../db/students.db";
        std::vector<student> vecs = getStudentFromDB(dbPath);
        sorts(vecs, 0, vecs.size() - 1, [&](const student &a, const student &b) {
            return a.id > b.id;
        });
        for (auto &i: vecs)
        {
            qDebug() << i.id << i.name << i.classid << i.score;
        }
        auto result_student = getStudentFromId(vecs, ui->textEdit->toPlainText().toLongLong());
        ui->listView->setModel(new QStandardItemModel(1, 1, this));
        if (result_student.id == 0)
        {
            auto *model = qobject_cast<QStandardItemModel *>(ui->listView->model());
            model->setItem(0, 0, new QStandardItem("未找到学生"));
            ui->textEdit_2->setEnabled(false);
            ui->textEdit_2->clear();
            ui->pushButton_3->setEnabled(false);
        }
        else
        {
            auto *model = qobject_cast<QStandardItemModel *>(ui->listView->model());
            model->setItem(0, 0, new QStandardItem(result_student.name));
            ui->textEdit_2->setText(QString::number(result_student.score));
            ui->textEdit_2->setEnabled(true);
            ui->pushButton_3->setEnabled(true);
        }
    });
    connect(ui->pushButton_3, &QPushButton::clicked, this, [&]() {
        auto id = ui->textEdit->toPlainText().toLongLong();
        auto newScore = ui->textEdit_2->toPlainText().toLongLong();
        QString dbPath = QDir::currentPath() + "/../db/students.db";
        if (!QFile::exists(dbPath))
        {
            qDebug() << "Error: Database file does not exist at" << dbPath;
            return;
        }
        QSqlDatabase db = QSqlDatabase::database("qt_sql_default_connection", false);
        if (!db.isValid())
        {
            db = QSqlDatabase::addDatabase("QSQLITE", "qt_sql_default_connection");
            db.setDatabaseName(dbPath);
        }
        if (!db.open())
        {
            qDebug() << "Error: Unable to open database. " << db.lastError().text();
            return;
        }
        QSqlQuery query(db);
        query.prepare("UPDATE students SET score = :score WHERE id = :id");
        query.bindValue(":score", newScore);
        query.bindValue(":id", id);
        if (!query.exec())
        {
            qDebug() << "Error: Unable to update score. " << query.lastError().text();
        }
        else
        {
            qDebug() << "updated" << id;
        }

        db.close();
    });
}

Edit::~Edit()
{
    delete ui;
}
