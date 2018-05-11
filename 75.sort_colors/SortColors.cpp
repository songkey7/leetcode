//
// Created by Qi Song on 2/9/18.
//

#include "SortColors.h"

void SortColors::sort_colors(vector<int> &nums) {
    int p[3] = {0};
    for(auto x: nums)
        for (int i = 2; i >= x; --i)
            nums[p[i]++] = i;
}

void SortColors::run() {
    vector<int> nums = {0,2,1,0,1,2};
    vector<int> ret = {0,0,1,1,2,2};
    sort_colors(nums);
    assert(nums == ret);
}
