//
// Created by Qi Song on 26/03/2018.
//

#include "ReverseInteger.h"

int ReverseInteger::reverse(int x) {
    long ret = 0;
    bool flag = x < 0;
    long xx = flag ? 0L - x : x;
    while(xx){
        ret = ret * 10 + xx % 10;
        if(ret > INT_MAX) return 0;
        xx /= 10;
    }

    return static_cast<int>(flag ? 0 - ret : ret);
}

void ReverseInteger::run() {
//    assert(reverse(123) == 321);
//    assert(reverse(-123) == -321);
//    assert(reverse(120) == 21);
//    assert(reverse(1534236469) == 0);
    assert(reverse(-2147483648) == 0);
}
