//
// Created by Qi Song on 03/06/2018.
//

#include "InsertInterval.h"

vector<InsertInterval::Interval> InsertInterval::insert(vector<Interval> &intervals, Interval x) {
    int i = 0;
    vector<Interval> ret;
    for(;i < intervals.size() && x.end >= intervals[i].start; i++){
        if(x.start > intervals[i].end) {
            ret.push_back(intervals[i]);
        }
        else{
            x.start = min(x.start, intervals[i].start);
            x.end = max(x.end, intervals[i].end);
        }
    }
    ret.push_back(x);
    for(;i < intervals.size();i++){
        ret.push_back(intervals[i]);
    }
    return ret;
}

void InsertInterval::run() {
    vector<Interval> intervals = {Interval(1,3), Interval(6,9)};
    vector<Interval> ret = {Interval(1,5), Interval(6,9)};
    assert(insert(intervals, Interval(2,5)) == ret);

    vector<Interval> intervals1 = {Interval(1,2), Interval(3,5), Interval(6,7), Interval(8,10), Interval(12,16)};
    vector<Interval> ret1 = {Interval(1,2), Interval(3,10), Interval(12,16)};
    assert(insert(intervals1, Interval(4,8)) == ret1);

    vector<Interval> intervals2 = {Interval(1,5)};
    vector<Interval> ret2 = {Interval(1,5)};
    assert(insert(intervals2, Interval(2,3)) == ret2);

    vector<Interval> intervals3 = {Interval(1,5), Interval(12,15)};
    vector<Interval> ret3 = {Interval(1,5), Interval(6,6), Interval(12,15)};
    assert(insert(intervals3, Interval(6,6)) == ret3);

}
