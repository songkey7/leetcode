//
// Created by Qi Song on 1/8/18.
//

#ifndef LEETCODE_TWOSUM_H
#define LEETCODE_TWOSUM_H

#include "../Base.h"

class TwoSum: public Base{
public:
    int run();

private:
    vector<int> twoSum(vector<int>& nums, int target);
};


#endif //LEETCODE_TWOSUM_H
