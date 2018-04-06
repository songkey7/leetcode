//
// Created by Qi Song on 06/04/2018.
//

#ifndef LEETCODE_HAPPYNUMBER_H
#define LEETCODE_HAPPYNUMBER_H


#include "../Base.h"

class HappyNumber: public Base {
    bool is_happy(int n);
    unordered_set<int> visit_map;
public:
    void run();
};


#endif //LEETCODE_HAPPYNUMBER_H
