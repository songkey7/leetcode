//
// Created by Qi Song on 16/05/2018.
//

#ifndef LEETCODE_TRIANGLE_H
#define LEETCODE_TRIANGLE_H


#include "../Base.h"

class Triangle: public Base {
    int minimum_total(vector<vector<int>>& triangle);
    int minimum_total2(vector<vector<int>>& triangle);
public:
    void run();
};


#endif //LEETCODE_TRIANGLE_H
