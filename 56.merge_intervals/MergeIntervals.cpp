//
// Created by Qi Song on 2/8/18.
//

#include "MergeIntervals.h"


vector<MergeIntervals::Interval> MergeIntervals::merge(vector<Interval> &intervals) {
    sort(intervals.begin(), intervals.end(), comp);
    vector<Interval> ret;
    for (auto x: intervals) {
        if(ret.empty() || x.start > ret.rbegin()->end)
            ret.push_back(x);
        else{
            ret.rbegin()->end = max(ret.rbegin()->end, x.end);
        }
    }
    return ret;
}

void MergeIntervals::run() {
    vector<Interval> intervals = {Interval(1,3), Interval(2,6), Interval(8,10), Interval(15,18)};
    vector<Interval> ret = {Interval(1,6), Interval(8,10), Interval(15,18)};
    assert(merge(intervals) == ret);
}
