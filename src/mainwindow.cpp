//
// Created by AyanMR on 25-4-25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "../include/mainwindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent), ui(new Ui::MainWindow)
{
    this->setWindowIcon(QIcon(":/icon.png"));
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, [&]() {
        if (ui->radioButton->isChecked())
        {
            auto rankingWindow = new Ranking();
            rankingWindow->show();
            this->close();
        }
        else if (ui->radioButton_2->isChecked())
        {
            auto editWindow = new Edit();
            editWindow->show();
            this->close();
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
