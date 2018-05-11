//
// Created by Qi Song on 11/05/2018.
//

#include "SearchA2DMatrix.h"

bool SearchA2DMatrix::search_matrix(vector<vector<int>> &matrix, int target) {
    int m = matrix.size();
    if(m == 0) return false;
    int n = matrix[0].size();
    int i = 0, j = m * n - 1;
    while(i <= j){
        int d = (i + j) / 2;
        int ii = d / n, jj = d % n;
        if(target == matrix[ii][jj]) return true;
        if(target < matrix[ii][jj]) j = d - 1;
        else i = d + 1;
    }
    return false;
}

void SearchA2DMatrix::run() {
    vector<vector<int>> matrix0 = {{1,   1}};
    assert(!search_matrix(matrix0, 2));

    vector<vector<int>> matrix1 = {{1,   3,  5,  7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 50}};
    assert(search_matrix(matrix1, 3));


    vector<vector<int>> matrix2 = {{1,   3,  5,  7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 50}};
    assert(!search_matrix(matrix2, 13));
}
