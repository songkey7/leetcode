//
// Created by Qi Song on 2/27/18.
//

#include "MinimumPathSum.h"

int MinimumPathSum::min_path_sum(vector<vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<int> dp(n + 1, 0);
    for(int j = 0; j < n; j++){
        dp[j+1] = dp[j] + grid[0][j];
    }
    dp[0] = INT_MAX;
    for(int i = 1; i < m; i++){
       for(int j = 0; j < grid[i].size(); j++){
            dp[j + 1] = grid[i][j] + min(dp[j + 1], dp[j]);
       }
    }
    return dp[n];
}

void MinimumPathSum::run() {
    vector<vector<int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
    assert(min_path_sum(grid) == 7);
}
