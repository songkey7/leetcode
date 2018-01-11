//
// Created by Qi Song on 1/10/18.
//

#include "MaximumSubarray.h"

int MaximumSubarray::max_sub_array(vector<int> &nums) {
    int sum = 0;
    int ret = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        ret = max(ret, sum);
        if(sum < 0) sum = 0;
    }
    return ret;
}

int MaximumSubarray::max_sub_array2(vector<int> &nums) {
    int sum = nums[0];
    int ret = nums[0];
    for(int i = 1; i < nums.size(); ++i){
        sum = max(nums[i], sum + nums[i]);
        ret = max(ret, sum);
    }
    return ret;
}

void MaximumSubarray::run() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    assert(max_sub_array(nums) == 6);
    assert(max_sub_array2(nums) == 6);
    vector<int> nums1 = {1,2};
    assert(max_sub_array(nums1) == 3);
    assert(max_sub_array2(nums1) == 3);
}