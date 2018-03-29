//
// Created by Qi Song on 29/03/2018.
//

#include "PlusOne.h"

vector<int> PlusOne::plus_one(vector<int> &digits) {
    int one = 1;
    vector<int> ret;
    for(int i = digits.size() - 1; i >= 0; i--){
        int tmp = digits[i] + one;
        one = tmp / 10;
        tmp = tmp % 10;
        ret.push_back(tmp);
    }
    if(one) ret.push_back(one);
    reverse(ret.begin(), ret.end());
    return ret;
}

void PlusOne::run() {
    vector<int> digits = {9,9,9};
    vector<int> ret = {1,0,0,0};
    assert(plus_one(digits) == ret);
}
