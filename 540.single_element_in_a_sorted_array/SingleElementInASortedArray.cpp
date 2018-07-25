//
// Created by Qi Song on 03/07/2018.
//

#include "SingleElementInASortedArray.h"

int SingleElementInASortedArray::single_non_duplicate(vector<int> nums) {
    return single_non_duplicate(nums, 0, nums.size() - 1);
}

int SingleElementInASortedArray::single_non_duplicate(vector<int> &nums, int l, int r) {
    if(l == r) return nums[l];
    int m = (l + r) / 2;
    if(nums[m - 1] != nums[m] && nums[m + 1] != nums[m]) return nums[m];

    if(m % 2){
        if(nums[m - 1] != nums[m]) return single_non_duplicate(nums, l, m - 1);
        return single_non_duplicate(nums, m + 1, r);
    }
    else{
        if(nums[m - 1] != nums[m]) return single_non_duplicate(nums, m, r);
        return single_non_duplicate(nums, l, m);
    }
}

void SingleElementInASortedArray::run() {
    assert(single_non_duplicate({1,1,2,3,3,4,4,8,8}) == 2);
    assert(single_non_duplicate({3,3,7,7,10,11,11}) == 10);
}


