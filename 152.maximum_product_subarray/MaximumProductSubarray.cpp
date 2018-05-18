//
// Created by Qi Song on 1/10/18.
//

#include "MaximumProductSubarray.h"

int MaximumProductSubarray::max_product(vector<int> &nums) {
    int ret, mi, ma;
    ret = mi = ma = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        int a = mi * nums[i];
        int b = ma * nums[i];
        mi = min(min(a, b), nums[i]);
        ma = max(max(a, b), nums[i]);
        ret = max(ret, ma);
    }
    return ret;
}

void MaximumProductSubarray::run() {
    vector<int> nums = {2,3,-2,4};
    assert(max_product(nums) == 6);
    vector<int> nums2 = {-4,-3,-2};
    assert(max_product(nums2) == 12);
}