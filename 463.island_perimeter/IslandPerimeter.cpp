//
// Created by songkey on 2018/6/9.
//

#include "IslandPerimeter.h"

int IslandPerimeter::island_perimeter(vector<vector<int>> &grid) {
    size_t m = grid.size();
    if(m == 0) return 0;
    size_t n = grid[0].size();
    if(n == 0) return 0;
    int ret = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(grid[i][j]) {
                ret += 4;
                if(i > 0 && grid[i - 1][j]) ret--;
                if(i < m - 1 && grid[i + 1][j]) ret--;
                if(j > 0 && grid[i][j - 1]) ret--;
                if(j < n - 1 && grid[i][j + 1]) ret--;
            }
        }
    }
    return ret;
}

void IslandPerimeter::run() {
    vector<vector<int>> grid = {
            {0,1,0,0},
            {1,1,1,0},
            {0,1,0,0},
            {1,1,0,0}};
    assert(island_perimeter(grid) == 16);
}
