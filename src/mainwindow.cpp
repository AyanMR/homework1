//
// Created by AyanMR on 25-4-25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "../include/mainwindow.h"
#include "ui_MainWindow.h"
#include <QPushButton>
#include <QIcon>


MainWindow::MainWindow(QWidget *parent) : QWidget(parent), ui(new Ui::MainWindow)
{
    this->setWindowIcon(QIcon(":/icon.png"));
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, []() {
        qDebug() << "PUSHED";
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
