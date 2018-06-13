//
// Created by Qi Song on 12/06/2018.
//

#include "NonDecreasingArray.h"

bool NonDecreasingArray::check_possibility(vector<int> nums) {
    size_t n = nums.size();
    int cnt = 1;
    for (int i = 1; i < n; ++i) {
        if(nums[i - 1] > nums[i]){
            if(--cnt < 0) return false;
            if(i < 2 || nums[i - 2] < nums[i]) nums[i - 1] = nums[i];
            else nums[i] = nums[i - 1];
        }
    }
    return true;
}

void NonDecreasingArray::run() {
    assert(check_possibility({4,2,3}));
    assert(check_possibility({2,3,3,2,4}));
    assert(!check_possibility({4,2,1}));
}
