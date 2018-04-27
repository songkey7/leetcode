//
// Created by Qi Song on 1/29/18.
//

#include "HouseRobber.h"

int HouseRobber::rob(vector<int> &nums) {
    int n = nums.size();
    if(n == 0) return 0;
    vector<int> dp(n + 1, 0);
    dp[1] = nums[0];
    for(int i = 1; i < n; i++){
        dp[i + 1] = max(nums[i] + dp[i - 1], dp[i]);
    }
    return dp[n];
}

void HouseRobber::run() {
    vector<int> nums3 = {2, 1, 1, 2};
    assert(rob(nums3) == 4);
    vector<int> nums2 = {2,1};
    assert(rob(nums2) == 2);
    vector<int> nums = {1,2,3,4,5};
    assert(rob(nums) == 9);
}
