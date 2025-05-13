//
// Created by AyanMR on 25-5-13.
//

#ifndef GETSTUDENT_H
#define GETSTUDENT_H
#include "FindnStudent.h"

student getStudentFromId(std::vector<student> &vecs, long long id);

std::vector<student> getStudentFromDB(QString &dbPath);


#endif //GETSTUDENT_H
