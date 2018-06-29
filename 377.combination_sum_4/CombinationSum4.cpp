//
// Created by Qi Song on 26/06/2018.
//

#include "CombinationSum4.h"

int CombinationSum4::combination_sum(vector<int> nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> dp(target + 1, 0);
    for (int i = 1; i <= target; ++i) {
        for (int j = 0; j < n && nums[j] <= i; ++j) {
            if(nums[j] == i) dp[i] += 1;
            else dp[i] += dp[i - nums[j]];
        }
    }
    return dp[target];
}

void CombinationSum4::run() {
    assert(combination_sum({1,2,3}, 4) == 7);
}
