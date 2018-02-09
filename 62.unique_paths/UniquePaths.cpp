//
// Created by Qi Song on 2/9/18.
//

#include "UniquePaths.h"

int UniquePaths::unique_paths(int m, int n) {
    vector<int> ret(n, 1);
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++)
            ret[j] = ret[j] + ret[j - 1];
    }
    return ret[n-1];
}

void UniquePaths::run() {
    assert(unique_paths(1, 2) == 1);
}
