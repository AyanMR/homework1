//
// Created by AyanMR on 25-5-13.
//

#ifndef SORT_H
#define SORT_H
#include <functional>

void sorts(std::vector<student> &vecs, int left, int right,
           std::function<bool(const student &, const long long &)> compare);

void sorts(std::vector<student> &vecs, int left, int right,
           std::function<bool(const student &, const student &)> compare);

#endif //SORT_H
