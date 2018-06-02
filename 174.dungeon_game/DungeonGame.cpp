//
// Created by songkey on 2018/5/30.
//

#include "DungeonGame.h"

int DungeonGame::calculate_minimum_HP(vector<vector<int>> &dungeon) {
    size_t m = dungeon.size();
    if(m == 0) return 1;
    size_t n = dungeon[0].size();
    if(n == 0) return 1;
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, INT_MAX));
    dp[m][n - 1] = dp[m - 1][n] = 1;
    for (int i = m - 1; i >= 0; --i) {
        for (int j = n - 1; j >= 0; --j) {
            int need = min(dp[i + 1][j], dp[i][j + 1]) - dungeon[i][j];
            dp[i][j] = need < 1 ? 1 : need;
        }
    }
    return dp[0][0];
}

void DungeonGame::run() {
    vector<vector<int>> dungeon = {{-2, -3, 3}, {-5, -10, 1}, {10, 30, -5}};
    assert(calculate_minimum_HP(dungeon) == 7);
    vector<vector<int>> dungeon1 = {{1, -3, 3}, {0, -2, 0}, {-3, -3, -3}};
    assert(calculate_minimum_HP(dungeon1) == 3);
}
