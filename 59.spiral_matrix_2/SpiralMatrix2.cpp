//
// Created by Qi Song on 08/05/2018.
//

#include "SpiralMatrix2.h"

vector<vector<int>> SpiralMatrix2::generate_matrix(int n) {
    if(n <= 0) return vector<vector<int>>();
    vector<vector<int>> ret(n, vector<int>(n, 0));
    int idx = 0;
    for (int loop = 0; loop < n / 2; ++loop) {
        int i = loop, j = loop;
        while(j < n - 1 - loop) ret[i][j++] = ++idx;
        while(i < n - 1 - loop) ret[i++][j] = ++idx;
        while(j > loop) ret[i][j--] = ++idx;
        while(i > loop) ret[i--][j] = ++idx;
    }
    if(n % 2) ret[n/2][n/2] = ++idx;
    return ret; 
}

void SpiralMatrix2::run() {
    vector<vector<int>> ret = {{1,2,3},{8,9,4},{7,6,5}}; 
    assert(generate_matrix(3) == ret);
}
