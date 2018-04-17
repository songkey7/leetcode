//
// Created by Qi Song on 17/04/2018.
//

#include "SumOfTwoIntegers.h"

int SumOfTwoIntegers::get_sum(int a, int b) {
    while(a){
        int c = a ^ b;
        a = (a & b) << 1;
        b = c;
    }
    return b;
}

void SumOfTwoIntegers::run() {
    assert(get_sum(7, 1) == 8);
}
