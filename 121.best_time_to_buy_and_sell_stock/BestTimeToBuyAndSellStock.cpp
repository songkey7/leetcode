//
// Created by Qi Song on 2/7/18.
//

#include "BestTimeToBuyAndSellStock.h"

int BestTimeToBuyAndSellStock::max_profit(vector<int> &prices) {
    int n = prices.size();
    if(n < 2) return 0;
    vector<int> dp(n, 0);
    dp[0] = prices[0];
    int ret = 0;
    for(int i = 1; i < n; i++){
        int tmp = prices[i] - dp[i - 1];
        if( tmp > 0){
            ret = max(ret, tmp);
            dp[i] = dp[i - 1];
        }
        else{
            dp[i] = prices[i];
        }
    }
    return ret;
}

void BestTimeToBuyAndSellStock::run() {
    vector<int> nums1 = {7, 1, 5, 3, 6, 4};
    assert(max_profit(nums1) == 5);
    vector<int> nums2 = {7, 6, 4, 3, 1};
    assert(max_profit(nums2) == 0);
}
