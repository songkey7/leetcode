//
// Created by user on 02/03/2018.
//

#include "SearchA2DMatrix2.h"

bool SearchA2DMatrix2::search_matrix(vector<vector<int>> &matrix, int target) {
    int m = matrix.size();
    if(m == 0) return false;
    int n = matrix[0].size();
    for(int i = 0, j = n-1; i < m && j >= 0;){
        int x = matrix[i][j];
        if(x == target) return true;
        else if(x < target) i++;
        else j--;
    }
    return false;
}

void SearchA2DMatrix2::run() {
    vector<vector<int>> matrix = {
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    assert(search_matrix(matrix, 5));
    assert(!search_matrix(matrix, 20));
}
