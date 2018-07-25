//
// Created by Qi Song on 02/07/2018.
//

#include "SingleNumber3.h"

vector<int> SingleNumber3::single_number(vector<int> nums) {
    int xor_val = 0;
    for(auto x: nums) xor_val ^= x;
    int bit = 1;
    while((xor_val & bit) == 0) {
        bit = bit << 1;
    }
    int ret1 = 0;
    int ret2 = 0;
    for(auto x: nums) {
        if(x & bit)
            ret1 ^= x;
        else
            ret2 ^= x;
    }
    return {ret1, ret2};
}

void SingleNumber3::run() {
    vector<int> ret = {3,5};
    assert(single_number({1,2,1,3,2,5}) == ret);
}
