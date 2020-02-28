//
// Created by songkey on 2020/2/27.
//

#include "ComplementOfBase10Integer.h"


int ComplementOfBase10Integer::bitwiseComplement(int N) {
    if(N == 0) return 1;
    int ret = 0;
    for(int i = 0; N > 0; i++, N = N / 2) {
        ret += ((1 - (N % 2)) << i);
    }
    return ret;
}

void ComplementOfBase10Integer::run() {
    assert(bitwiseComplement(5) == 2);
    assert(bitwiseComplement(7) == 0);
    assert(bitwiseComplement(10) == 5);
}

