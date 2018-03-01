//
// Created by Qi Song on 3/1/18.
//

#ifndef LEETCODE_LONGESTINCREASINGSUBSEQUENCE_H
#define LEETCODE_LONGESTINCREASINGSUBSEQUENCE_H


#include "../Base.h"

class LongestIncreasingSubsequence: public Base {
    int length_of_LIS(vector<int>& nums);
    int length_of_LIS2(vector<int>& nums);
public:
    void run();
};


#endif //LEETCODE_LONGESTINCREASINGSUBSEQUENCE_H
