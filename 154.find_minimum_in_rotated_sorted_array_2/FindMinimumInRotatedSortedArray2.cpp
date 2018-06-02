//
// Created by Qi Song on 2/6/18.
//

#include "FindMinimumInRotatedSortedArray2.h"

int FindMinimumInRotatedSortedArray2::find_min(vector<int> &nums) {
    int i = 0, j = nums.size() - 1;
    while(i < j){
        if(nums[i] < nums[j]) return nums[i];
        int m = (i + j) / 2;
        if(nums[m] == nums[j]) j--;
        else if(nums[m] > nums[j]) i = m + 1;
        else j = m;
    }
    return nums[i];
}

void FindMinimumInRotatedSortedArray2::run() {
    vector<int> nums = {4,5,6,7,0,1,2};
    assert(find_min(nums) == 0);
    vector<int> nums2 = {3,3,1,3};
    assert(find_min(nums2) == 1);
}
