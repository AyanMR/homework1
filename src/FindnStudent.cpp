//
// Created by AyanMR on 25-5-8.
//
#include "FindnStudent.h"

std::vector<student> findn(const QString &dbPath, int n)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);
    if (!db.open())
    {
        qDebug() << "Error: Unable to open database.";
        return {};
    }
    QSqlQuery query;
    query.prepare("SELECT id, name, classid, score FROM students");

    if (!query.exec())
    {
        throw std::runtime_error("SQL´íÎó: " + query.lastError().text().toStdString());
    }
    std::vector<student> vecs;
    while (query.next())
    {
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        int classid = query.value(2).toInt();
        int score = query.value(3).toInt();
        vecs.emplace_back(id, name, classid, score);
    }
    db.close();
    sorts(vecs, 0, vecs.size() - 1);
    if (n < vecs.size())
        vecs.resize(n);
    return vecs;
}

void sorts(std::vector<student> &vecs, int left, int right)
{
    if (left >= right)
        return;
    int tmp_i = vecs[right].score;
    int i = left, j = right - 1;
    while (i <= j)
    {
        if (vecs[i].score < tmp_i)
        {
            std::swap(vecs[i], vecs[j]);
            --j;
        }
        else
        {
            ++i;
        }
    }
    std::swap(vecs[i], vecs[right]);
    sorts(vecs, left, i - 1);
    sorts(vecs, i + 1, right);
}
