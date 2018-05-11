//
// Created by Qi Song on 29/03/2018.
//

#include "SpiralMatrix.h"

vector<int> SpiralMatrix::spiral_order(vector<vector<int>> &matrix) {
    vector<int> ret;
    int m = matrix.size();
    if(m == 0) return ret;
    if(m == 1) return matrix[0];
    int n = matrix[0].size();
    for (int left = 0, right = n - 1, top = 0, bottom = m - 1; left <= right && top <= bottom; left++, right--, top++, bottom--) {
        int i = top, j = left;
        if(top == bottom){
            while(j <= right) ret.push_back(matrix[i][j++]);
            break;
        }
        if(left == right){
            while(i <= bottom) ret.push_back(matrix[i++][j]);
            break;
        }
        while(j < right) ret.push_back(matrix[i][j++]);
        while(i < bottom) ret.push_back(matrix[i++][j]);
        while(j > left) ret.push_back(matrix[i][j--]);
        while(i > top) ret.push_back(matrix[i--][j]);
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
