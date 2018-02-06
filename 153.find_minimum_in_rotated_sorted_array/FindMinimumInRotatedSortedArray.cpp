//
// Created by Qi Song on 2/6/18.
//

#include "FindMinimumInRotatedSortedArray.h"

int FindMinimumInRotatedSortedArray::find_min(vector<int> &nums) {
    int n = nums.size();
    int l = 0, r = n - 1;
    while(l < r){
        int m = (l + r) / 2;
        if(nums[r] < nums[m]) l = m + 1;
        else r = m;
    }
    return nums[l];
}

void FindMinimumInRotatedSortedArray::run() {
    vector<int> nums = {4,5,6,7,0,1,2};
    assert(find_min(nums) == 0);
}
