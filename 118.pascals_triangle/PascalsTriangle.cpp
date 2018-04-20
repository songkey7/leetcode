//
// Created by Qi Song on 02/04/2018.
//

#include "PascalsTriangle.h"

vector<vector<int>> PascalsTriangle::generate(int num) {
    if(num < 1) return {{}};
    vector<vector<int>> ret = {{1}};
    for (int i = 2; i <= num; ++i) {
        vector<int> tmp(i, 1);
        for(int j = 1; j < i - 1; j++){
            tmp[j] = ret.back()[j - 1] + ret.back()[j];
        }
        ret.push_back(tmp);
    }
    return ret;
}

void PascalsTriangle::run() {
    vector<vector<int>> ret = {{1},
                              {1,1},
                             {1,2,1},
                            {1,3,3,1},
                           {1,4,6,4,1}};
    assert(generate(5) == ret);
}
