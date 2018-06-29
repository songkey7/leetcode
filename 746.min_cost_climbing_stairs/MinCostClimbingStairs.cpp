//
// Created by Qi Song on 28/06/2018.
//

#include "MinCostClimbingStairs.h"

int MinCostClimbingStairs::min_cost_climbing_stairs(vector<int> &cost) {
    size_t n = cost.size();
    vector<int> dp = cost;
    for (int i = 2; i < n; ++i) {
        dp[i] = min(dp[i -2], dp[i - 1]) + cost[i];
    }
    return min(dp[n -1], dp[n - 2]);
}

void MinCostClimbingStairs::run() {
    vector<int> cost1 = {10, 15, 20};
    assert(min_cost_climbing_stairs(cost1) == 15);

    vector<int> cost2 = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    assert(min_cost_climbing_stairs(cost2) == 6);
}
