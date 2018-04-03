//
// Created by Qi Song on 03/04/2018.
//

#include "BestTimeToBuyAndSellStock2.h"

int BestTimeToBuyAndSellStock2::max_profit(vector<int> &prices) {
    size_t n = prices.size();
    vector<int> dp(n + 1, 0);
    for(int i = 1; i < n; i++){
        for(int j = i - 1; j >= 0; j--){
            int tmp = prices[i] - prices[j];
            dp[i + 1] = max(dp[i + 1], dp[i]);
            if(tmp > 0){
                dp[i + 1] = max(dp[i + 1], tmp + dp[j]);
            }
        }
    }
    return dp[n];
}

int BestTimeToBuyAndSellStock2::max_profit2(vector<int> &prices) {
    size_t n = prices.size();
    int ret = 0;
    for(int i = 1; i < n; i++){
        ret += max(prices[i] - prices[i - 1], 0);
    }
    return ret;
}

void BestTimeToBuyAndSellStock2::run() {
    vector<int> nums1 = {7, 1, 5, 3, 6, 4};
    assert(max_profit(nums1) == 7);
    vector<int> nums2 = {2, 4, 1};
    assert(max_profit2(nums2) == 2);
}


