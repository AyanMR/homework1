//
// Created by AyanMR on 25-5-4.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Ranking.h" resolved

#include "ranking.h"
#include "ui_Ranking.h"


Ranking::Ranking(QWidget *parent) : QWidget(parent), ui(new Ui::Ranking)
{
    ui->setupUi(this);
    connect(ui->pushButton_2, &QPushButton::clicked, this, [&]() {
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
        this->close();
    });
}

Ranking::~Ranking()
{
    delete ui;
}
