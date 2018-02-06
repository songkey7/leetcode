//
// Created by Qi Song on 2/6/18.
//

#include "SearchInRotatedSortedArray2.h"

bool SearchInRotatedSortedArray2::search(vector<int> &nums, int target) {
    int n = nums.size();
    if(n == 0) return false;
    int l = 0, r = n - 1;
    while(l < r){
        int m = (l + r) / 2;
        if(nums[m] == target) return true;
        if(nums[m] > nums[r]){
            if(target < nums[m] && nums[l] <= target) r = m;
            else l = m + 1;
        } else if(nums[m] < nums[r]) {
            if(target > nums[m] && nums[r] >= target){
                l = m + 1;
            } else{
                r = m;
            }
        }
        else{
            r--;
        }
    }
    return nums[l] == target;
}

void SearchInRotatedSortedArray2::run() {
    vector<int> nums = {4,5,6,7,0,1,2};
    assert(search(nums, 1));
    assert(!search(nums, 3));
    vector<int> nums2 = {1,1,1,1,1,1,2,1,1,1};
    assert(search(nums2, 2));
}


