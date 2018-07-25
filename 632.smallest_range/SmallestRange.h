//
// Created by Qi Song on 09/07/2018.
//

#ifndef LEETCODE_SMALLESTRANGE_H
#define LEETCODE_SMALLESTRANGE_H


#include "../Base.h"

class SmallestRange: public Base {
    static bool cmp(const vector<int> & a, const vector<int> & b){return a[0] > b[0];}
    vector<int> smallest_range(vector<vector<int>>& nums);
public:
    void run();

};


#endif //LEETCODE_SMALLESTRANGE_H
