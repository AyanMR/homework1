//
// Created by AyanMR on 25-5-8.
//

#ifndef FINDNSTUDENT_H
#define FINDNSTUDENT_H
#include <utility>
#include <vector>
#include<QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include "ranking.h"
#include <memory>

class student
{
public:
    long long id;
    QString name;
    long long classid, score;
    student(long long id, QString name, long long classid, long long score)
        : id(id), name(std::move(name)), classid(classid), score(score) {}
    student(): id(0), name(""), classid(0), score(0) {}
    ~student() {}
};

std::vector<student> findn(QString &dbPath, int n);

#endif //FINDNSTUDENT_H
