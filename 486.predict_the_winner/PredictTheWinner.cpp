//
// Created by Qi Song on 16/06/2018.
//

#include "PredictTheWinner.h"

bool PredictTheWinner::predict_the_winner(vector<int> nums) {
    return helper(nums, 0, nums.size() - 1) > 0;
}

int PredictTheWinner::helper(vector<int> &nums, int b, int e) {
    if(b == e) return nums[b];
    return max(nums[b] - helper(nums, b + 1, e), nums[e] - helper(nums, b, e - 1));
}

bool PredictTheWinner::predict_the_winner2(vector<int> nums) {
    size_t n = nums.size();
    if(n < 3) return true;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) dp[i][i] = nums[i];
    for (int i = 1; i < n; ++i) {
        for (int j = i - 1; j >= 0; --j) {
            dp[j][i] = max(nums[i] - dp[j][i - 1], nums[j] - dp[j + 1][i]);
        }
    }
    return dp[0][n - 1] >= 0;
}

void PredictTheWinner::run() {
    assert(!predict_the_winner2({2, 4, 55, 6, 8}));
    assert(!predict_the_winner2({1, 5, 2}));
    assert(predict_the_winner2({1, 5, 233, 7}));
}


