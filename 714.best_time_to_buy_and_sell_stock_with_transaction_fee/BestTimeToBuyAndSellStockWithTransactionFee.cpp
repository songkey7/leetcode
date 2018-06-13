//
// Created by Qi Song on 13/06/2018.
//

#include "BestTimeToBuyAndSellStockWithTransactionFee.h"

int BestTimeToBuyAndSellStockWithTransactionFee::max_profit(vector<int> prices, int fee) {
    size_t n = prices.size();
    if(n < 2) return 0;
    vector<int> buy(n, 0);
    vector<int> sell(n, 0);
    buy[0] = -prices[0];
    for (int i = 1; i < n; ++i) {
        buy[i] = max(sell[i - 1] - prices[i], buy[i - 1]);
        sell[i] = max(sell[i - 1], buy[i - 1] + prices[i] - fee);
    }
    return sell[n - 1];
}

void BestTimeToBuyAndSellStockWithTransactionFee::run() {
    assert(max_profit({1, 3, 2, 8, 4, 9}, 2) == 8);
    assert(max_profit({1, 3, 7, 5, 10, 3}, 3) == 6);
}
