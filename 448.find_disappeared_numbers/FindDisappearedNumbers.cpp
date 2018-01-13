//
// Created by Qi Song on 1/13/18.
//

#include "FindDisappearedNumbers.h"


vector<int> FindDisappearedNumbers::find_disappeared_numbers(vector<int> &nums) {
    size_t n = nums.size();
    vector<bool> tmp(n + 1, false);
    for(int i = 0; i < n; ++i){
        tmp[nums[i]] = true;
    }
    vector<int> ret;
    for(int i = 1; i < n + 1; ++i){
        if(tmp[i]) continue;
        ret.push_back(i);
    }
    return ret;
}

void FindDisappearedNumbers::run() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ret = {5,6};
    assert(find_disappeared_numbers(nums) == ret);
}
