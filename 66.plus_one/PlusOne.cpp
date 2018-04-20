//
// Created by Qi Song on 29/03/2018.
//

#include "PlusOne.h"

vector<int> PlusOne::plus_one(vector<int> &digits) {
    int n = digits.size();
    int carry = 1;
    for(int i = n - 1; i >= 0; i--){
        int tmp = digits[i] + carry;
        digits[i] = tmp % 10;
        carry = tmp / 10;
    }
    if(carry) digits.insert(digits.begin(), carry);
    return digits;
}

void PlusOne::run() {
    vector<int> digits = {9,9,9};
    vector<int> ret = {1,0,0,0};
    assert(plus_one(digits) == ret);
}
