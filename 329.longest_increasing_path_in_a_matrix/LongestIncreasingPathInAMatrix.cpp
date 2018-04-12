//
// Created by Qi Song on 12/04/2018.
//

#include "LongestIncreasingPathInAMatrix.h"

int LongestIncreasingPathInAMatrix::longest_increasing_path(vector<vector<int>> &matrix) {
    int m = matrix.size();
    if(m == 0) return 0;
    int n = matrix[0].size();
    unordered_map<long, int> visit_map;
    int ret = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            ret = max(ret, dfs(matrix, i, j, m, n, INT_MIN, visit_map, 0));
        }
    }
    return ret;
}

int LongestIncreasingPathInAMatrix::dfs(vector<vector<int>> &matrix, int i, int j, int m, int n, int k, unordered_map<long, int> & visit_map, int cnt) {
    if(i < 0 || i >= m || j < 0 || j >= n || matrix[i][j] == INT_MAX) {
        return cnt;
    }

    if(matrix[i][j] > k){
        long key = long(i) << 32 | j;
        auto itr = visit_map.find(key);
        if(itr != visit_map.end()){
            int tmp = itr->second + cnt;
            return tmp;
        }

        cnt++;
        int tmp = matrix[i][j];
        matrix[i][j] = INT_MAX;
        int r1 = dfs(matrix, i - 1, j, m, n, tmp, visit_map, cnt);
        int r2 = dfs(matrix, i + 1, j, m, n, tmp, visit_map, cnt);
        int r3 = dfs(matrix, i, j - 1, m, n, tmp, visit_map, cnt);
        int r4 = dfs(matrix, i, j + 1, m, n, tmp, visit_map, cnt);
        matrix[i][j] = tmp;
        int x = max(max(max(r1, r2), r3), r4);
        visit_map[key] = x - cnt + 1;
        return x;
    }

    return cnt;
}

void LongestIncreasingPathInAMatrix::run() {
    vector<vector<int>> nums = {{9,9,4},
                                {6,6,8},
                                {2,1,1}};
    assert(longest_increasing_path(nums) == 4);

    vector<vector<int>> nums1 = {{3,4,5},
                                 {3,2,6},
                                 {2,2,1}};
    assert(longest_increasing_path(nums1) == 4);

}


