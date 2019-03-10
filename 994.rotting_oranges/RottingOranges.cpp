//
// Created by songkey on 2019/3/10.
//

#include "RottingOranges.h"

bool RottingOranges::rotting(vector<vector<int>> &grid, int i, int j, int m, int n) {
    if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != 1) return false;
    grid[i][j] = 2;
    return true;
}


int RottingOranges::orangesRotting(vector<vector<int>> &grid) {
    int m = grid.size();
    if(m == 0) return -1;
    int n = grid[0].size();
    int ret = 0;
    int cnt = 0;
    deque<pair<int, int>> q;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 2) q.emplace_back(i, j);
            else if (grid[i][j] == 1) cnt++;
        }
    }
    while(!q.empty() && cnt > 0){
        int sz = q.size();
        ret++;
        while(sz-- > 0){
            auto p = q.front();
            q.pop_front();
            if(rotting(grid, p.first - 1, p.second, m, n)){
                q.emplace_back(p.first - 1, p.second);
                cnt--;
            }
            if(rotting(grid, p.first + 1, p.second, m, n)){
                q.emplace_back(p.first + 1, p.second);
                cnt--;
            }
            if(rotting(grid, p.first, p.second - 1, m, n)){
                q.emplace_back(p.first, p.second - 1);
                cnt--;
            }
            if(rotting(grid, p.first, p.second + 1, m, n)){
                q.emplace_back(p.first, p.second + 1);
                cnt--;
            }
        }
    }

    return cnt > 0 ? -1 : ret;
}

void RottingOranges::run() {
    vector<vector<int>> data = {{0}};
    assert(orangesRotting(data) == 0);
    vector<vector<int>> data1 = {{2,1,1},{1,1,0},{0,1,1}};
    assert(orangesRotting(data1) == 4);
    vector<vector<int>> data2 = {{2,1,1},{0,1,1},{1,0,1}};
    assert(orangesRotting(data2) == -1);
}


