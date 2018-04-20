//
// Created by Qi Song on 20/04/2018.
//

#include "PascalsTriangle2.h"

vector<int> PascalsTriangle2::get_row(int rowIndex) {
    if(rowIndex == 0) return vector<int>(1,1);
    vector<int> ret(2,1);
    for(int i = 2; i <= rowIndex; i++){
        vector<int> tmp(i + 1, 1);
        for(int j = 1; j < i; j++){
            tmp[j] = ret[j - 1] + ret[j];
        }
        ret = tmp;
    }
    return ret;
}

void PascalsTriangle2::run() {
    vector<int> ret = {1,3,3,1};
    assert(get_row(3) == ret);
}
