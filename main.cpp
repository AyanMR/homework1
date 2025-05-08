#pragma once
#pragma execution_character_set("utf-8")
#include <QApplication>
#include "include/mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return QApplication::exec();
}
