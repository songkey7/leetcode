//
// Created by Qi Song on 20/03/2018.
//

#include "ClimbingStairs.h"

int ClimbingStairs::climb_stairs(int n) {
    vector<int> dp(n + 1, 1);
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

void ClimbingStairs::run() {
    assert(climb_stairs(2) == 2);
    assert(climb_stairs(3) == 3);
}
