//
// Created by Qi Song on 2/27/18.
//

#include "UniqueBinarySearchTrees.h"

int UniqueBinarySearchTrees::num_trees(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < i; j++){
            dp[i] += dp[i - j - 1] * dp[j];
        }
    }
    return dp[n];
}

void UniqueBinarySearchTrees::run() {
    assert(num_trees(3) == 5);
}
