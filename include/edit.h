//
// Created by AyanMR on 25-5-4.
//

#ifndef EDIT_H
#define EDIT_H

#include <QWidget>
#include "mainwindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>


QT_BEGIN_NAMESPACE

namespace Ui
{
    class Edit;
}

QT_END_NAMESPACE

class Edit : public QWidget
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);

    ~Edit() override;

private:
    Ui::Edit *ui;
};


#endif //EDIT_H
