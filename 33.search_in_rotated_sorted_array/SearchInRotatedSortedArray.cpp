//
// Created by Qi Song on 2/6/18.
//

#include "SearchInRotatedSortedArray.h"

int SearchInRotatedSortedArray::search(vector<int> &nums, int target) {
    int i = 0, j = nums.size() - 1;
    while(i <= j){ //
        int m = (i + j) / 2;
        if(nums[m] == target) return m;
        if(nums[m] > nums[j]){
            if(nums[m] < target) i = m + 1;
            else {
                if(nums[i] == target) return i;
                if(nums[i] < target) j = m - 1;
                else i = m + 1;
            }
        }
        else{
            if(nums[m] > target) j = m - 1;
            else {
                if(target == nums[j]) return j;
                if(target > nums[j]) j = m - 1;
                else i = m + 1;
            }
        }
    }
    return -1;
}

void SearchInRotatedSortedArray::run() {
    vector<int> nums = {4,5,6,7,0,1,2};
    assert(search(nums, 1) == 5);
    assert(search(nums, 3) == -1);
}


