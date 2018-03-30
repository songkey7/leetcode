//
// Created by Qi Song on 30/03/2018.
//

#include "SetMatrixZeroes.h"

void SetMatrixZeroes::set_zeroes(vector<vector<int>> &matrix) {
    int m = matrix.size();
    if(m == 0) return;

    set<int> i_set;
    set<int> j_set;
    int n = matrix[0].size();
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                i_set.insert(i);
                j_set.insert(j);
            }
        }
    }
    for(auto i: i_set){
        for(int j = 0; j < n; j++) matrix[i][j] = 0;
    }
    for(auto j: j_set){
        for(int i = 0; i < m; i++) matrix[i][j] = 0;
    }
}

void SetMatrixZeroes::run() {
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> ret = {{1,0,1},{0,0,0},{1,0,1}};
    set_zeroes(matrix);
    assert(matrix == ret);
}
