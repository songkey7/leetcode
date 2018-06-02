//
// Created by songkey on 2018/5/27.
//

#include "BestTimeToBuyAndSellStock3.h"

int BestTimeToBuyAndSellStock3::max_profit(vector<int> prices) {
    size_t n = prices.size();
    vector<int> buy(3, INT_MIN);
    vector<int> sell(3, 0);
    for (int i = 0; i < n; ++i) {
        for(int k = 1; k <= 2; k++){
            buy[k] = max(buy[k], sell[k - 1] - prices[i]);
            sell[k] = max(sell[k], buy[k] + prices[i]);
        }
    }
    return sell[2];
}

void BestTimeToBuyAndSellStock3::run() {
    assert(max_profit({3,3,5,0,0,3,1,4}) == 6);
    assert(max_profit({7,6,4,3,1}) == 0);
}
