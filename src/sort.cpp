//
// Created by AyanMR on 25-5-13.
//

#include "FindnStudent.h"
#include "sort.h"
#include <functional>

void sorts(std::vector<student> &vecs, int left, int right,
           std::function<bool(const student &, const long long &)> compare)
{
    if (left >= right)
        return;
    auto tmp_i = vecs[right].score;
    int i = left, j = right - 1;
    while (i <= j)
    {
        if (compare(vecs[i], tmp_i))
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
    sorts(vecs, left, i - 1, compare);
    sorts(vecs, i + 1, right, compare);
}

void sorts(std::vector<student> &vecs, int left, int right,
           std::function<bool(const student &, const student &)> compare)
{
    if (left >= right)
        return;
    int i = left, j = right - 1;
    while (i <= j)
    {
        if (compare(vecs[i], vecs[right]))
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
    sorts(vecs, left, i - 1, compare);
    sorts(vecs, i + 1, right, compare);
}
