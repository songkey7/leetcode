//
// Created by Qi Song on 09/03/2018.
//

#include "SearchForARange.h"

vector<int> SearchForARange::search_range(vector<int> &nums, int target) {
    int i = 0, j = nums.size() - 1;
    while(i <= j){
        int m = (i + j) / 2;
        if(nums[m] == target){
            for (i = m; i >= 0 && nums[j] == target; --i);
            for (j = m; j < nums.size() && nums[j] == target; ++j);
            return {i + 1, j - 1};
        }
        else if(nums[m] > target) j = m - 1;
        else i = m + 1;
    }
    return {-1, -1};
}

void SearchForARange::run() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    vector<int> ret = {3,4};
    assert(search_range(nums, 8) == ret);
    vector<int> nums1 = {0, 0, 0, 1, 2, 3};
    vector<int> ret1 = {0, 2};
    assert(search_range(nums1, 0) == ret1);
}
