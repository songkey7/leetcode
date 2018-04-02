//
// Created by Qi Song on 02/04/2018.
//

#include "PascalsTriangle.h"

vector<vector<int>> PascalsTriangle::generate(int num) {
    if(num < 1) return vector<vector<int>>();
    vector<vector<int>> ret(num, vector<int>(1,1));
    for(int i = 1; i < num; i++){
        for(int j = 1; j < ret[i - 1].size(); j++){
            ret[i].push_back(ret[i - 1][j - 1] + ret[i - 1][j]);
        }
        ret[i].push_back(1);
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
