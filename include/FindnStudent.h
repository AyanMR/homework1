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
    int id;
    QString name;
    int classid, score;

    student(int id, QString name, int classid, int score)
        : id(id), name(std::move(name)), classid(classid), score(score) {}

    student(): id(0), name(""), classid(0), score(0) {}
    ~student() {}
};

std::vector<student> findn(const QString &dbPath, int n);

void sorts(std::vector<student> &vecs, int left, int right);


#endif //FINDNSTUDENT_H
