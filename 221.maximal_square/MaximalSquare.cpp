//
// Created by Qi Song on 2/9/18.
//

#include "MaximalSquare.h"

int MaximalSquare::maximal_square(vector<vector<char>> &matrix) {
    int m = matrix.size();
    if(m == 0) return 0;
    int n = matrix[0].size();
    if(n == 0) return 0;
    vector<int> height(n, 0);
    vector<int> left(n, 0);
    vector<int> right(n, n - 1);

    int ret = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) {
            height[j] = matrix[i][j] == '1' ? height[j] + 1 : 0;
        }

        for(int j = 1; j < n; j++) {
            int cur_left = j - 1;
            while(cur_left >= 0 && height[cur_left] >= height[j]) cur_left = left[cur_left] - 1;
            left[j] = cur_left + 1;
        }

        for(int j = n - 2; j >= 0; j--) {
            int cur_right = j + 1;
            while(cur_right < n && height[cur_right] >= height[j]) cur_right = right[cur_right] + 1;
            right[j] = cur_right - 1;
        }

        for(int j = 0; j < n; j++) {
            int a = min((right[j] - left[j] + 1), height[j]);
            ret = max(ret, a * a);
        }
    }

    return ret;
}

void MaximalSquare::run() {
    vector<vector<char>> matrix = {
            {'1','0','1','0','0'},
            {'1','0','1','1','1'},
            {'1','1','1','1','1'},
            {'1','0','0','1','0'}
    };
    assert(maximal_square(matrix) == 4);
}
