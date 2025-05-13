//
// Created by AyanMR on 25-5-8.
//
#include "FindnStudent.h"
#include "getStudent.h"
#include "sort.h"

std::vector<student> findn(QString &dbPath, int n)
{
    std::vector<student> vecs = getStudentFromDB(dbPath);
    sorts(vecs, 0, vecs.size() - 1, [&](const student &a, const long long &b) {
        return a.score < b;
    });
    if (n < vecs.size())
        vecs.resize(n);
    return vecs;
}
