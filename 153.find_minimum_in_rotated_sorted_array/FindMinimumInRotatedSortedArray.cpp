//
// Created by Qi Song on 2/6/18.
//

#include "FindMinimumInRotatedSortedArray.h"

int FindMinimumInRotatedSortedArray::find_min(vector<int> &nums) {
    int i = 0, j = nums.size() - 1;
    while(i < j){
        int m = (i + j) / 2;
        if(nums[m] > nums[j]) i = m + 1;
        else j = m;
    }
    return nums[j];
}

void FindMinimumInRotatedSortedArray::run() {
    vector<int> nums = {4,5,6,7,0,1,2};
    assert(find_min(nums) == 0);
}
