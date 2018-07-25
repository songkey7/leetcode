//
// Created by Qi Song on 19/07/2018.
//

#include "TwoKeysKeyboard.h"

int TwoKeysKeyboard::min_steps(int n) {
    vector<int>dp(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        int j = i - 1;
        while(j > 0 && i % j != 0) j--;
        dp[i] = dp[j] + i/j;
    }
    return dp[n];
}

void TwoKeysKeyboard::run() {
    assert(min_steps(3) == 3);
}
