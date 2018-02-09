//
// Created by Qi Song on 2/9/18.
//

#include "SortColors.h"

void SortColors::sort_colors(vector<int> &nums) {
    int p0 = 0, p1 = 0, p2 = 0;
    for(auto x: nums){
        if(x == 0){
            nums[p2++] = 2;
            nums[p1++] = 1;
            nums[p0++] = 0;
        } else if(x == 1){
            nums[p2++] = 2;
            nums[p1++] = 1;
        } else{
            nums[p2++] = 2;
        }
    }
}

void SortColors::run() {
    vector<int> nums = {0,2,1,0,1,2};
    vector<int> ret = {0,0,1,1,2,2};
    sort_colors(nums);
    assert(nums == ret);
}
