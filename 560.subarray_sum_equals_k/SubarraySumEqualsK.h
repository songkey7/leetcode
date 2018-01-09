//
// Created by Qi Song on 1/9/18.
//

#ifndef LEETCODE_SUBARRAYSUMEQUALSK_H
#define LEETCODE_SUBARRAYSUMEQUALSK_H


#include "../Base.h"

class SubarraySumEqualsK: public Base {
public:
    void run();

private:
    int subarray_sum(vector<int>& nums, int k);
};


#endif //LEETCODE_SUBARRAYSUMEQUALSK_H
