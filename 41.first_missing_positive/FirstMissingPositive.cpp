//
// Created by Qi Song on 28/03/2018.
//

#include "FirstMissingPositive.h"

int FirstMissingPositive::first_missing_positive(vector<int> &nums) {
    int n = nums.size();
    if(n == 0) return 1;
    vector<int> tmp(n + 1, 0);
    for(int i = 0; i < n; i++){
        if(nums[i] <= n && nums[i] > 0){
            tmp[nums[i]] = nums[i];
        }
    }
    int i = 1;
    while(i <= n && tmp[i] == i) i++;
    return i;
}

void FirstMissingPositive::run() {
    vector<int> nums = {2,1};
    assert(first_missing_positive(nums) == 3);
}


