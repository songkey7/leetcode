//
// Created by Qi Song on 29/03/2018.
//

#include "SpiralMatrix.h"

vector<int> SpiralMatrix::spiral_order(vector<vector<int>> &matrix) {
    int m = matrix.size();
    if(m==0) return vector<int>();

    int n = matrix[0].size();
    vector<int> ret;
    for(int i0 = 0, i1 = m - 1, j0 = 0, j1 = n - 1; i0 <= i1 && j0 <= j1; i0++, i1--, j0++, j1--)
    {
        if(i0 == i1) {
            for(int j = j0; j <= j1; j++) ret.push_back(matrix[i0][j]);
            break;
        }
        if(j0 == j1) {
            for(int i = i0; i <= i1; i++) ret.push_back(matrix[i][j0]);
            break;
        }

        int i = i0, j = j0;
        while(j < j1)
            ret.push_back(matrix[i0][j++]);
        while(i < i1)
            ret.push_back(matrix[i++][j1]);
        while(j > j0)
            ret.push_back(matrix[i1][j--]);
        while(i > i0)
            ret.push_back(matrix[i--][j0]);
    }

    return ret;
}

void SpiralMatrix::run() {
    vector<vector<int>> matrix = {{1,2},
                                  {4,3}};
    vector<int> ret = {1,2,3,4};
    assert(spiral_order(matrix) == ret);

    vector<vector<int>> matrix2 = {{1,2,3},
                                  {4,5,6},
                                  {7,8,9}};
    vector<int> ret2 = {1,2,3,6,9,8,7,4,5};
    assert(spiral_order(matrix2) == ret2);

    vector<vector<int>> matrix3 = {{6,9,7}};
    assert(spiral_order(matrix3) == matrix3[0]);
}
