//
// Created by songkey on 2018/6/9.
//

#include "MaxAreaOfIsland.h"

int MaxAreaOfIsland::max_area_of_island(vector<vector<int>> &grid) {
    size_t m = grid.size();
    if(m == 0) return 0;
    size_t n = grid[0].size();
    if(n == 0) return 0;
    int ret = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int cnt = 0;
            dfs(grid, m, n, i, j, cnt, ret);
        }
    }
    return ret;
}

void MaxAreaOfIsland::dfs(vector<vector<int>> &grid, size_t m, size_t n, int i, int j, int &cnt, int &ret) {
    if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0) return;
    cnt ++;
    ret = max(ret, cnt);
    grid[i][j] = 0;
    dfs(grid, m, n, i - 1, j, cnt, ret);
    dfs(grid, m, n, i + 1, j, cnt, ret);
    dfs(grid, m, n, i, j - 1, cnt, ret);
    dfs(grid, m, n, i, j + 1, cnt, ret);
}

void MaxAreaOfIsland::run() {
    vector<vector<int>> grid = {
        {0,0,1,0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,1,1,0,1,0,0,0,0,0,0,0,0},
        {0,1,0,0,1,1,0,0,1,0,1,0,0},
        {0,1,0,0,1,1,0,0,1,1,1,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,1,1,0,0,0,0}};
    assert(max_area_of_island(grid) == 6);
}


