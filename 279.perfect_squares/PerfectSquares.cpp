//
// Created by user on 02/03/2018.
//

#include "PerfectSquares.h"

int PerfectSquares::num_squares(int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j * j <= i; j++){
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    return dp[n];
}

void PerfectSquares::run() {
    assert(num_squares(12) == 3);
    assert(num_squares(13) == 2);
}
