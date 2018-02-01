//
// Created by Qi Song on 2/1/18.
//

#include "NumberOfIslands.h"

int NumberOfIslands::num_islands(vector<vector<char>> &grid) {
    size_t m = grid.size();
    if(m == 0) return 0;
    size_t n = grid[0].size();
    if(n == 0) return 0;
    vector<vector<char>> mask(m, vector<char>(n, 0));
    int ret = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(search(grid, i, j, m, n, mask)) ret++;
        }
    }
    return ret;
}

bool NumberOfIslands::search(vector<vector<char>> &grid, int i, int j, size_t m, size_t n, vector<vector<char>> &mask) {
    if(0 <= i && i < m && 0 <= j && j < n && mask[i][j] == 0 && grid[i][j] == 1){
        mask[i][j] = 1;
        search(grid, i - 1, j, m, n, mask);
        search(grid, i, j - 1, m, n, mask);
        search(grid, i + 1, j, m, n, mask);
        search(grid, i, j + 1, m, n, mask);
        return true;
    }
    return false;
}

void NumberOfIslands::run() {

    vector<vector<char>> grid = {{1, 1, 1, 1, 0},
                                 {1, 1, 0, 1, 0},
                                 {1, 1, 0, 0, 0},
                                 {0, 0, 0, 0, 0}};
    assert(num_islands(grid) == 1);

    vector<vector<char>> grid2 = {{1, 1, 0, 0, 0},
                                  {1, 1, 0, 0, 0},
                                  {0, 0, 1, 0, 0},
                                  {0, 0, 0, 1, 1}};
    assert(num_islands(grid2) == 3);
}
