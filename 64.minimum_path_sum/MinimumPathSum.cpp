//
// Created by Qi Song on 2/27/18.
//

#include "MinimumPathSum.h"

int MinimumPathSum::min_path_sum(vector<vector<int>> &grid) {
    int m = grid.size();
    if(m == 0) return 0;
    int n = grid[0].size();
    if(n == 0) return 0;
    vector<int> dp(n + 1, INT_MAX);
    for (int i = 0; i < m; ++i) {
        dp[0] = i == 0 ? 0 : INT_MAX;
        for (int j = 0; j < n; ++j) {
            dp[j + 1] = min(dp[j], dp[j + 1]) + grid[i][j];
        }
    }
    return dp[n];
}

void MinimumPathSum::run() {
    vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    assert(min_path_sum(grid) == 7);
}
