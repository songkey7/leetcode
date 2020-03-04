//
// Created by songkey on 2020/3/2.
//

#ifndef LEETCODE_INTEGERBREAK_H
#define LEETCODE_INTEGERBREAK_H


#include "../Base.h"

class IntegerBreak: public Base {
    int integerBreak(int n);
    int integerBreak(int n, vector<int>& dp);
public:
    void run() override ;

};


#endif //LEETCODE_INTEGERBREAK_H
