//
// Created by Qi Song on 1/10/18.
//

#ifndef LEETCODE_MAXIMUMSUBARRAY_H
#define LEETCODE_MAXIMUMSUBARRAY_H


#include "../Base.h"

class MaximumSubarray: public Base {
    int max_sub_array(vector<int>& nums);
    int max_sub_array2(vector<int>& nums);
public:
    void run();
};

#endif //LEETCODE_MAXIMUMSUBARRAY_H
