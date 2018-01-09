//
// Created by Qi Song on 1/9/18.
//

#include "TargetSum.h"

int TargetSum::find_target_sum_ways(vector<int> &nums, int S) {
    auto n = nums.size();
    auto m = pow(2, n + 1) - 1;
    vector<int> rst(m, 0);
    int ret = 0;
    for(int i = 0; i < n; i++){
        for(auto j = static_cast<unsigned long>(pow(2, i + 1) - 1); j < pow(2, i + 2) - 1; j++){
            rst[j] = (1 == j % 2) ? rst[(j-1) / 2] - nums[i] : rst[(j-1) / 2] + nums[i];
            if(i == n-1 && rst[j] == S) ret ++;
        }
    }
    return ret;
}

// pos - neg = S
// pos + pos + neg - neg = S + sum
// pos = (S + sum) / 2
int TargetSum::find_target_sum_ways2(vector<int> &nums, int S) {
    int sum = 0;
    for(auto x: nums) sum += x;
    if((S + sum) % 2 == 1 || S > sum) return 0;
    auto target = static_cast<unsigned int>((S + sum) / 2);

    auto n = nums.size();
    vector<int> dp(target + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
       for(int j = target; j >= nums[i]; j--) {
           dp[j] = dp[j - nums[i]] + dp[j];
       }
    }
    return dp[target];
}

void TargetSum::run() {
    vector<int> nums = {1, 1, 1, 1, 1};
    int S = 3;
    assert(find_target_sum_ways(nums, S) == 5);
    assert(find_target_sum_ways2(nums, S) == 5);
}

