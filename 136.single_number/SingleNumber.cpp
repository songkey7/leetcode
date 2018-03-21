//
// Created by Qi Song on 21/03/2018.
//

#include "SingleNumber.h"

int SingleNumber::single_number(vector<int> &nums) {
    int ret = 0;
    for(auto x: nums){
        ret = ret ^ x;
    }
    return ret;
}

void SingleNumber::run() {
    vector<int> nums = {1,2,3,4,4,3,2};
    assert(single_number(nums) == 1);
}
