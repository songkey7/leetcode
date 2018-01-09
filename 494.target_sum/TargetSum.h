//
// Created by Qi Song on 1/9/18.
//

#ifndef LEETCODE_TARGETSUM_H
#define LEETCODE_TARGETSUM_H


#include "../Base.h"

class TargetSum: public Base {
    int find_target_sum_ways(vector<int> &nums, int S);
    int find_target_sum_ways2(vector<int> &nums, int S);
public:
    void run();
};


#endif //LEETCODE_TARGETSUM_H
