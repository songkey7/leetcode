//
// Created by songkey on 2020/3/2.
//

#include "IntegerBreak.h"

int IntegerBreak::integerBreak(int n, vector<int> &dp) {
    int ret = n - 1;
    if(dp[n] > 0) return dp[n];
    for (int i = 2; i <= (n + 1) / 2; ++i) {
        int a = max(i, integerBreak(i, dp));
        int b = max(n - i, integerBreak(n - i, dp));
        ret = max(ret, a * b);
    }
    dp[n] = ret;
    return ret;
}

int IntegerBreak::integerBreak(int n) {
    vector<int> dp(n + 1, 0);
    return integerBreak(n, dp);
}

void IntegerBreak::run() {
    assert(integerBreak(2) == 1);
    assert(integerBreak(10) == 36);
}


