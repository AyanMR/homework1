//
// Created by AyanMR on 25-5-4.
//

#ifndef RANKING_H
#define RANKING_H

#include <QWidget>
#include "mainwindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QPushButton>
#include <QIcon>


QT_BEGIN_NAMESPACE

namespace Ui
{
    class Ranking;
}

QT_END_NAMESPACE

class Ranking : public QWidget
{
    Q_OBJECT

public:
    explicit Ranking(QWidget *parent = nullptr);

    ~Ranking() override;

private:
    Ui::Ranking *ui;
};


#endif //RANKING_H
