//
// Created by Qi Song on 03/06/2018.
//

#ifndef LEETCODE_INSERTINTERVAL_H
#define LEETCODE_INSERTINTERVAL_H


#include "../Base.h"

class InsertInterval: public Base {
    struct Interval {
        int start;
        int end;
        Interval() : start(0), end(0) {}
        Interval(int s, int e) : start(s), end(e) {}
        bool operator == (const Interval & other) const{
            return this->start == other.start && this->end == other.end;
        }
    };
    vector<Interval> insert(vector<Interval>& intervals, Interval x);
public:
    void run();
};


#endif //LEETCODE_INSERTINTERVAL_H
