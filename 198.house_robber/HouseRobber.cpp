//
// Created by Qi Song on 1/29/18.
//

#include "HouseRobber.h"

int HouseRobber::rob(vector<int> &nums) {
    size_t n = nums.size();
    if(n == 0) return 0;
    vector<int> ret(n + 1, 0);
    ret[1] = nums[0];
    for(int i = 2; i < n + 1; i++){
       ret[i] = max(ret[i - 1], ret[i - 2] + nums[i - 1]);
    }
    return ret[n];
}

void HouseRobber::run() {
    vector<int> nums3 = {2, 1, 1, 2};
    assert(rob(nums3) == 4);
    vector<int> nums2 = {2,1};
    assert(rob(nums2) == 2);
    vector<int> nums = {1,2,3,4,5};
    assert(rob(nums) == 9);
}
