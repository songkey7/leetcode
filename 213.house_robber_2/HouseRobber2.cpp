//
// Created by Qi Song on 1/29/18.
//

#include "HouseRobber2.h"

int HouseRobber2::rob(vector<int> &nums) {
    size_t n = nums.size();
    if(n == 0) return 0;
    if(n == 1) return nums[0];
    return max(rob(nums, 0, n - 2), rob(nums, 1, n - 1));
}

int HouseRobber2::rob(vector<int> &nums, size_t i, size_t n) {
    vector<int> ret(n - i + 2, 0);
    ret[1] = nums[i];
    for(size_t j = 2; j < n - i + 2; j++){
        ret[j] = max(ret[j - 1], ret[j - 2] + nums[i + j - 1]);
    }
    return ret[n - i + 1];
}

void HouseRobber2::run() {
    vector<int> nums3 = {2, 1, 1, 2};
    assert(rob(nums3) == 3);
    vector<int> nums2 = {2,1};
    assert(rob(nums2) == 2);
    vector<int> nums = {1,2,3,4,5};
    assert(rob(nums) == 8);
}
