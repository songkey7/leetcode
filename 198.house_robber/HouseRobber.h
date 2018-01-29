//
// Created by Qi Song on 1/29/18.
//

#ifndef LEETCODE_HOUSEROBBER_H
#define LEETCODE_HOUSEROBBER_H


#include "../Base.h"

class HouseRobber: public Base {
    int rob(vector<int>& nums);
    int rob(vector<int>& nums, size_t i);
public:
    void run();
};


#endif //LEETCODE_HOUSEROBBER_H
