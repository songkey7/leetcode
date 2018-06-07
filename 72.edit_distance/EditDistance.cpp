//
// Created by Qi Song on 2/27/18.
//

#include "EditDistance.h"

int EditDistance::min_distance(string word1, string word2) {
    size_t n1 = word1.length();
    size_t n2 = word2.length();
    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
    for (int i = 1; i <= n1; ++i) dp[i][0] = i;
    for (int j = 1; j <= n2; ++j) dp[0][j] = j;
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            dp[i + 1][j + 1] = word1[i] == word2[j] ? dp[i][j] : min(min(dp[i][j], dp[i + 1][j]), dp[i][j + 1]) + 1;
        }
    }
    return dp[n1][n2];
}

void EditDistance::run() {
    assert(min_distance("horse", "ros") == 3);
    assert(min_distance("intention", "execution") == 5);
}
