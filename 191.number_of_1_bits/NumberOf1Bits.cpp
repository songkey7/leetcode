//
// Created by Qi Song on 06/04/2018.
//

#include "NumberOf1Bits.h"

int NumberOf1Bits::hamming_weight(uint32_t n) {
    int ret = 0;
    while(n){
        ret += n & 1;
        n = n >> 1;
    }
    return ret;
}

void NumberOf1Bits::run() {
    assert(hamming_weight(11) == 3);
}
