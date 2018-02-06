//
// Created by Qi Song on 2/6/18.
//

#include "FindMinimumInRotatedSortedArray2.h"

int FindMinimumInRotatedSortedArray2::find_min(vector<int> &nums) {
    int n = nums.size();
    int l = 0, r = n - 1;
    if(nums[l] < nums[r]) return nums[l];
    while(l < r){
        int m = (l + r) / 2;
        if(nums[r] < nums[m]) l = m + 1;
        else if(nums[m] < nums[r]) r = m;
        else r--;
    }
    return nums[l];
}

void FindMinimumInRotatedSortedArray2::run() {
    vector<int> nums = {4,5,6,7,0,1,2};
    assert(find_min(nums) == 0);
    vector<int> nums2 = {3,3,1,3};
    assert(find_min(nums2) == 1);
}
