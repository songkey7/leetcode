//
// Created by Qi Song on 03/07/2018.
//

#ifndef LEETCODE_SINGLEELEMENTINASORTEDARRAY_H
#define LEETCODE_SINGLEELEMENTINASORTEDARRAY_H


#include "../Base.h"

class SingleElementInASortedArray: public Base {
    int single_non_duplicate(vector<int> nums);
public:
    void run();

    int single_non_duplicate(vector<int> &nums, int l, int r);
};


#endif //LEETCODE_SINGLEELEMENTINASORTEDARRAY_H
