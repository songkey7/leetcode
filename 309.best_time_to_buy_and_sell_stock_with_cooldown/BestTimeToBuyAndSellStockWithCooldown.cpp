//
// Created by Qi Song on 20/03/2018.
//

#include "BestTimeToBuyAndSellStockWithCooldown.h"

int BestTimeToBuyAndSellStockWithCooldown::max_profit(vector<int> &prices) {
    size_t n = prices.size();
    if(n < 2) return 0;
    vector<int> s0(n, 0);
    vector<int> s1(n, -prices[0]);
    vector<int> s2(n, 0);
    for(int i = 1; i <= n; i++){
        s0[i] = max(s2[i - 1], s0[i - 1]);
        s1[i] = max(s0[i - 1] - prices[i], s1[i - 1]);
        s2[i] = s1[i - 1] + prices[i];
    }
    return max(s0[n - 1], s2[n - 1]);
}

void BestTimeToBuyAndSellStockWithCooldown::run() {
    vector<int> prices = {1, 2, 3, 0, 2};
    assert(max_profit(prices) == 3);
}
