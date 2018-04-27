//
// Created by Qi Song on 2/7/18.
//

#include "BestTimeToBuyAndSellStock.h"

int BestTimeToBuyAndSellStock::max_profit(vector<int> &prices) {
    int ret = 0;
    int m = INT_MAX;
    // the lowest price subtracted by the highest price after it.
    for (auto x: prices) {
        m = min(m, x);
        ret = max(ret, x - m);
    }
    return ret;
}

void BestTimeToBuyAndSellStock::run() {
    vector<int> nums1 = {7, 1, 5, 3, 6, 4};
    assert(max_profit(nums1) == 5);
    vector<int> nums2 = {7, 6, 4, 3, 1};
    assert(max_profit(nums2) == 0);
}
