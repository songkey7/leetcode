//
// Created by Qi Song on 2/9/18.
//

#include "UniquePaths.h"

int UniquePaths::unique_paths(int m, int n) {
    vector<int> dp(n, 1);
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[j] = dp[j] + dp[j - 1];
        }
    }
    return dp[n-1];
}

int UniquePaths::unique_paths2(int m, int n) {
    // C m + n -> m
    int d = min(m - 1, n - 1);
    long ret = 1;
    for (int i = 1; i <= d; ++i)
        ret = ret * (m + n - 1 - i) / i;
    return ret;
}

void UniquePaths::run() {
    assert(unique_paths(1, 2) == 1);
    assert(unique_paths2(13, 23) == 548354040);
}


