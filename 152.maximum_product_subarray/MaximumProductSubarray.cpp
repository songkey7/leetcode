//
// Created by Qi Song on 1/10/18.
//

#include "MaximumProductSubarray.h"

int MaximumProductSubarray::max_product(vector<int> &nums) {
    int ma = nums[0];
    int mi = nums[0];
    int ret = nums[0];
    for(int i = 1; i < nums.size(); i++){
        int t = ma;
        ma = max(max(nums[i] * ma, nums[i] * mi), nums[i]);
        mi = min(min(nums[i] * t, nums[i] * mi), nums[i]);
        ret = max(ret, max(ma, mi));
    }
    return ret;
}

void MaximumProductSubarray::run() {
    vector<int> nums = {2,3,-2,4};
    assert(max_product(nums) == 6);
    vector<int> nums2 = {-4,-3,-2};
    assert(max_product(nums2) == 12);
}