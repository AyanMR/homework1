//
// Created by AyanMR on 25-5-13.
//

#include "getStudent.h"
#include "FindnStudent.h"
#include "sort.h"

student getStudentFromId(std::vector<student> &vecs, long long id)
{
    int l = 0, r = vecs.size() - 1;
    while (l < r)
    {
        const int mid = (l + r) >> 1;
        if (vecs[mid].id == id)
            return vecs[mid];
        if (vecs[mid].id < id)
            l = mid + 1;
        else
            r = mid;
    }
    if (vecs[l].id == id)
        return vecs[l];
    return student();
}

std::vector<student> getStudentFromDB(QString &dbPath)
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
        auto id = query.value(0).toLongLong();
        QString name = query.value(1).toString();
        auto classid = query.value(2).toLongLong();
        auto score = query.value(3).toLongLong();
        vecs.emplace_back(id, name, classid, score);
    }
    db.close();
    return vecs;
}
