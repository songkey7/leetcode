//
// Created by Qi Song on 08/03/2018.
//

#ifndef LEETCODE_THREE_SUM_H
#define LEETCODE_THREE_SUM_H


#include "../Base.h"

class ThreeSum: public Base {
    vector<vector<int>> three_sum(vector<int> nums);
    void find_target(vector<int> nums, int i, int target, vector<vector<int>> &out);
public:
    void run();
};


#endif //LEETCODE_THREE_SUM_H
