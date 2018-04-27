//
// Created by Qi Song on 1/10/18.
//

#include "MaximumSubarray.h"

int MaximumSubarray::max_sub_array(vector<int> &nums) {
    int sum = 0;
    int ret = INT_MIN;
    for(int i = 0; i < nums.size(); ++i){
        // max is the current num or the sum include current num
        sum = max(nums[i], sum + nums[i]);
        ret = max(ret, sum);
    }
    return ret;
}

void MaximumSubarray::run() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    assert(max_sub_array(nums) == 6);
    vector<int> nums1 = {1,2};
    assert(max_sub_array(nums1) == 3);
}