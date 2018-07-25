//
// Created by Qi Song on 11/07/2018.
//

#include "NQueens.h"

vector<vector<string>> NQueens::solve_n_queens(int n) {
    vector<vector<string>> ret;
    vector<string> mask(n, string(n, '.'));
    sovle_n_queens(mask, 0, n, ret);
    return ret;
}

void NQueens::sovle_n_queens(vector<string> &mask, int i, int n, vector<vector<string>> &ret) {
    if(i == n){
        ret.push_back(mask);
    }
    for (int j = 0; j < n; ++j) {
        if(valid(mask, i, j, n)){
            mask[i][j] = 'Q';
            sovle_n_queens(mask, i + 1, n, ret);
            mask[i][j] = '.';
        }
    }
}

bool NQueens::valid(vector<string> &mask, int row, int col, int n) {
    for (int k = 0; k < n; ++k) {
        if(mask[k][col] == 'Q') return false;
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if(mask[i][j] == 'Q') return false;
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if(mask[i][j] == 'Q') return false;
    }
    return true;
}

void NQueens::run() {
    vector<vector<string>> ret = {
        {".Q..", "...Q", "Q...", "..Q."},
        {"..Q.", "Q...", "...Q", ".Q.."}};
    assert(solve_n_queens(4) == ret);
}


