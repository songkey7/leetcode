//
// Created by Qi Song on 2/6/18.
//

#include "SearchInRotatedSortedArray.h"

int SearchInRotatedSortedArray::search2(vector<int> &nums, int target) {
    int n = nums.size();
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(nums[m] == target) return m;
        if(nums[m] > nums[r]){
            if(target < nums[m] && nums[l] <= target) r = m - 1;
            else l = m + 1;
        } else if(nums[m] < nums[r]) {
            if(target > nums[m] && nums[r] >= target) l = m + 1;
            else r = m - 1;
        }
        else{
            if(target > nums[m]) l = m + 1;
            else r = m - 1;
        }
    }
    return -1;
}

int SearchInRotatedSortedArray::search(vector<int> &nums, int target) {
    int n = nums.size();
    if(n == 0) return -1;
    int l = 0, r = n - 1;
    while(l < r){
        int m = (l + r) / 2;
        if(nums[m] > nums[r]) l = m + 1;
        else r = m;
    }
    int ret = bi_search(nums, 0, r - 1, target);
    ret = ret != -1 ? ret: bi_search(nums, r, n - 1, target);
    return ret;
}

int SearchInRotatedSortedArray::bi_search(vector<int> &nums, int l, int r, int target) {
    while(l <= r){
        int m = (l + r) / 2;
        if(nums[m] == target) return m;
        else if(nums[m] > target) r = m - 1;
        else l = m + 1;
    }
    return -1;
}

void SearchInRotatedSortedArray::run() {
    vector<int> nums = {4,5,6,7,0,1,2};
    assert(search(nums, 1) == 5);
    assert(search(nums, 3) == -1);
}


