//
// Created by Qi Song on 3/1/18.
//

#include "BurstBalloons.h"

int BurstBalloons::max_coins(vector<int> &nums) {
    nums.insert(nums.begin(), 1);
    nums.insert(nums.end(), 1);
    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for(int i = 2; i < n; i++){
        for(int j = i - 2; j >= 0; j--){
            for(int k = j + 1; k < i; k++){
                dp[j][i] = max(dp[j][i], nums[k] * nums[i] * nums[j] + dp[j][k] + dp[k][i]);
            }
        }
    }
    return dp[0][n-1];
}

void BurstBalloons::run() {
    vector<int> nums = {3,1,5,8};
    assert(max_coins(nums) == 167);
}
