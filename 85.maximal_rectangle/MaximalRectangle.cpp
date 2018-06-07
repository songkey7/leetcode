//
// Created by Qi Song on 2/9/18.
//

#include "MaximalRectangle.h"

int MaximalRectangle::maximal_rectangle(vector<vector<char>> &matrix) {
    size_t m = matrix.size();
    if(m == 0) return 0;
    size_t n = matrix[0].size();
    if(n == 0) return 0;
    vector<int> height(n, 0);
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    int ret = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            height[j] = matrix[i][j] == '0' ? 0 : height[j] + 1;
            left[j] = right[j] = j;
            for (int k = j - 1; k >= 0 && height[k] >= height[j]; k = left[j] - 1) left[j] = left[k];
        }
        for (int j = n - 1; j >= 0; --j)
            for (int k = j + 1; k < n && height[k] >= height[j]; k = right[j] + 1) right[j] = right[k];
        for (int j = 0; j < n; ++j)
            for (int k = 0; k < n; ++k) ret = max(ret, height[j] * (right[j] - left[j] + 1));
    }
    return ret;
}

void MaximalRectangle::run() {
    vector<vector<char>> matrix = {
            {'1','0','1','0','0'},
            {'1','0','1','1','1'},
            {'1','1','1','1','1'},
            {'1','0','0','1','0'}
    };
    assert(maximal_rectangle(matrix) == 6);
    vector<vector<char>> matrix2 = {
                    {'0','0','0','1','0','1','1','1'},
                    {'0','1','1','0','0','1','0','1'},
                    {'1','0','1','1','1','1','0','1'},
                    {'0','0','0','1','0','0','0','0'},
                    {'0','0','1','0','0','0','1','0'},
                    {'1','1','1','0','0','1','1','1'},
                    {'1','0','0','1','1','0','0','1'},
                    {'0','1','0','0','1','1','0','0'},
                    {'1','0','0','1','0','0','0','0'}
    };
    assert(maximal_rectangle(matrix2) == 4);
}
