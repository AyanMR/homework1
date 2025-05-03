//
// Created by AyanMR on 25-5-4.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Edit.h" resolved

#include "../include/edit.h"
#include "ui_Edit.h"


Edit::Edit(QWidget *parent) :
    QWidget(parent), ui(new Ui::Edit) {
    ui->setupUi(this);
}

Edit::~Edit() {
    delete ui;
}
