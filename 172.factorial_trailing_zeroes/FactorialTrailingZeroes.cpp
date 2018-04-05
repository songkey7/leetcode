//
// Created by Qi Song on 06/04/2018.
//

#include "FactorialTrailingZeroes.h"

int FactorialTrailingZeroes::trailing_zeroes(int n) {
    if(n < 0) return trailing_zeroes(-n);
    return n < 5 ? 0 : n / 5 + trailing_zeroes(n / 5);
}

void FactorialTrailingZeroes::run() {
    assert(trailing_zeroes(25) == 6);
}
