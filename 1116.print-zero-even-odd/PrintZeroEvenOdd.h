//
// Created by songkey on 2020/3/31.
//

#ifndef LEETCODE_PRINTZEROEVENODD_H
#define LEETCODE_PRINTZEROEVENODD_H


#include "../Base.h"

class PrintZeroEvenOdd: public Base {
    static const int n = 10;
    static void printNumber(int i);
    static void zero();
    static void even();
    static void odd();
public:
    void run() override;

};


#endif //LEETCODE_PRINTZEROEVENODD_H
