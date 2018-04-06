//
// Created by Qi Song on 06/04/2018.
//

#include "ReverseBits.h"

uint32_t ReverseBits::reverse_bits(uint32_t n) {
    uint32_t ret = 0;
    for(int i = 0; i < 32; i++){
        ret |= ((n >> i) & 1) << (31 - i);
    }
    return ret;
}

void ReverseBits::run() {
    assert(reverse_bits(43261596) == 964176192);
}
