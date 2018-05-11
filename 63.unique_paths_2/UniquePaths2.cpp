//
// Created by Qi Song on 09/05/2018.
//

#include "UniquePaths2.h"

int UniquePaths2::unique_paths_with_obstacles(vector<vector<int>> &obstacleGrid) {
    int m = obstacleGrid.size();
    if(m == 0) return 0;
    int n = obstacleGrid[0].size();
    if(n == 0) return 0;
    vector<int> dp(n, 0);
    dp[0] = 1;
    for (int i = 0; i < m; ++i) {
        dp[0] = obstacleGrid[i][0] == 1 ? 0 : dp[0];
        for (int j = 1; j < n; ++j) {
            dp[j] = obstacleGrid[i][j] == 1 ? 0 : dp[j - 1] + dp[j];
        }
    }
    return dp[n - 1];
}

void UniquePaths2::run() {
    vector<vector<int>> obstacles = {{0,0,0},{0,1,0},{0,0,0}};
    assert(unique_paths_with_obstacles(obstacles) == 2);
}
