//
// Created by Qi Song on 30/03/2018.
//

#include "SetMatrixZeroes.h"

void SetMatrixZeroes::set_zeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    if(m == 0) return;
    int n = matrix[0].size();
    int tmp_i = 1, tmp_j = 1;
    // notice matrix[0][0]
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == 0 && matrix[i][j] == 0) tmp_i = 0;
            else if(j == 0 && matrix[i][j] == 0) tmp_j = 0;
            else if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for (int i = m - 1; i >= 0; --i) {
        for (int j = n - 1; j >= 0; --j) {
            if(i == 0 && tmp_i == 0) matrix[i][j] = 0;
            else if(j == 0 && tmp_j == 0) matrix[i][j] = 0;
            else if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
        }
    }
}

void SetMatrixZeroes::run() {
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> ret = {{1,0,1},{0,0,0},{1,0,1}};
    set_zeroes(matrix);
    assert(matrix == ret);
}
