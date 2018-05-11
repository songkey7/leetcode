//
// Created by Qi Song on 2/8/18.
//

#ifndef LEETCODE_MERGEINTERVALS_H
#define LEETCODE_MERGEINTERVALS_H


#include "../Base.h"

class MergeIntervals: public Base {
public:

    struct Interval {
        int start;
        int end;
        Interval() : start(0), end(0) {}
        Interval(int s, int e) : start(s), end(e) {}
        bool operator == (const Interval & other) const{
            return start == other.start && end == other.end;
        }
        bool operator < (const Interval & other) const{
            return start < other.start || (start == other.start && end == other.end);
        }
    };

    static bool comp(const Interval &a, const Interval &b){
        return a.start < b.start || (a.start == b.start && a.end < b.end);
    }

    vector<Interval> merge(vector<Interval>& intervals);
public:
    void run();

};


#endif //LEETCODE_MERGEINTERVALS_H
