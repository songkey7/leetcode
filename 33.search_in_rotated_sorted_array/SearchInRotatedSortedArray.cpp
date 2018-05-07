//
// Created by Qi Song on 2/6/18.
//

#include "SearchInRotatedSortedArray.h"

int SearchInRotatedSortedArray::search2(vector<int> &nums, int target) {
    int n = nums.size();
    int i = 0, j = n - 1;
    while(i <= j){
        int m = (i + j) / 2;
        if(target == nums[m]) return m;
        if(nums[m] > nums[j]){
            if(target > nums[m]) i = m + 1;
            else if(target > nums[j]) j = m - 1;
            else i = m + 1;
        }
        else{
            if(target < nums[m]) j = m - 1;
            else if(target <= nums[j]) i = m + 1;
            else j = m - 1;
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
    assert(search2(nums, 1) == 5);
    assert(search2(nums, 3) == -1);
}


