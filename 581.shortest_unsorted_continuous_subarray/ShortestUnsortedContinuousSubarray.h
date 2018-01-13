//
// Created by Qi Song on 1/11/18.
//

#ifndef LEETCODE_SHORTESTUNSORTEDCONTINUOUSSUBARRAY_H
#define LEETCODE_SHORTESTUNSORTEDCONTINUOUSSUBARRAY_H


#include "../Base.h"

class ShortestUnsortedContinuousSubarray: public Base {
    int find_unsorted_subarray(vector<int>& nums);
    int find_unsorted_subarray2(vector<int>& nums);
public:
    void run();

};


#endif //LEETCODE_SHORTESTUNSORTEDCONTINUOUSSUBARRAY_H
