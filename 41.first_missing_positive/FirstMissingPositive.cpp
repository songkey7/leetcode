//
// Created by Qi Song on 28/03/2018.
//

#include "FirstMissingPositive.h"

int FirstMissingPositive::first_missing_positive(vector<int> nums) {
    size_t n = nums.size();
    for (int i = 0; i < n; ++i) {
        while(nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]){
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    int i = 0;
    while(i < n && nums[i] - 1 == i) i++;
    return i + 1;
}

void FirstMissingPositive::run() {
    assert(first_missing_positive({6,5,4,3,2,1}) == 7);
    assert(first_missing_positive({1,2,0}) == 3);
    assert(first_missing_positive({0,2,2,1,1}) == 3);
}


