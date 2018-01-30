//
// Created by Qi Song on 1/29/18.
//

#ifndef LEETCODE_HOUSEROBBER_2_H
#define LEETCODE_HOUSEROBBER_2_H


#include "../Base.h"

class HouseRobber2: public Base {
    int rob(vector<int>& nums);
    int rob(vector<int>& nums, size_t i, size_t n);
public:
    void run();
};


#endif //LEETCODE_HOUSEROBBER_2_H
