//
// Created by songkey on 2019/3/3.
//

#ifndef LEETCODE_NONOVERLAPPINGINTERVALS_H
#define LEETCODE_NONOVERLAPPINGINTERVALS_H


#include "../Base.h"

class NonOverlappingIntervals: public Base {
    struct Interval {
        int start;
        int end;
        Interval() : start(0), end(0) {}
        Interval(int s, int e) : start(s), end(e) {}
    };
    int eraseOverlapIntervals(vector<Interval>& intervals);
public:
    void run() override;
};


#endif //LEETCODE_NONOVERLAPPINGINTERVALS_H
