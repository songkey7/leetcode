//
// Created by Qi Song on 29/06/2018.
//

#include "DeleteOperationForTwoStrings.h"

int DeleteOperationForTwoStrings::min_distance(string word1, string word2) {
    int n1 = word1.size();
    int n2 = word2.size();
    if(n1 == 0) return n2;
    if(n2 == 0) return n1;
    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            if(word1[i] == word2[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
            else dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
    }
    return n1 + n2 - 2 * dp[n1][n2];
}

void DeleteOperationForTwoStrings::run() {
    assert(min_distance("sea", "eat") == 2);
}
