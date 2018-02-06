//
// Created by Qi Song on 2/6/18.
//

#include "FindMinimumInRotatedSortedArray.h"

int FindMinimumInRotatedSortedArray::find_min(vector<int> &nums) {
    int n = nums.size();
    int l = 0, r = n - 1;
    if(nums[l] <= nums[r]) return nums[l];
    while(l + 1 < r){
        int m = (l + r) / 2;
        if(nums[l] < nums[m]) l = m;
        else r = m;
    }
    return nums[r];
}

void FindMinimumInRotatedSortedArray::run() {
    vector<int> nums = {4,5,6,7,0,1,2};
    assert(find_min(nums) == 0);
}
