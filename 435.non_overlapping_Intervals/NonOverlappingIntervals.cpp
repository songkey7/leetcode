//
// Created by songkey on 2019/3/3.
//

#include "NonOverlappingIntervals.h"

int NonOverlappingIntervals::eraseOverlapIntervals(vector<Interval>& intervals){
    if(intervals.empty()) return 0;
    auto comp = [](const Interval & a, const Interval & b){
             return a.end <= b.end; };
    sort(intervals.begin(), intervals.end(), comp);
    for(auto x: intervals){
        cout << x.start << ":" << x.end << endl;
    }
    int ret = 0;
    int e = intervals[0].end;
    for(int i = 1; i < intervals.size(); i++){
        if(intervals[i].start < e) {
            ret ++;
        }
        else{
            e = intervals[i].end;
        }
    }
    return ret;
}

void NonOverlappingIntervals::run() {
    vector<Interval> data1 = {Interval(1,2), Interval(2,3), Interval(3,4), Interval(1,3)};
    assert(eraseOverlapIntervals(data1) == 1);
    vector<Interval> data2 = {Interval(1,2), Interval(1,2), Interval(1,2)};
    assert(eraseOverlapIntervals(data2) == 2);
    vector<Interval> data3 = {Interval(1,2), Interval(2,3)};
    assert(eraseOverlapIntervals(data3) == 0);
}