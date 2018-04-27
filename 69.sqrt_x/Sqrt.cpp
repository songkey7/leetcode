//
// Created by Qi Song on 29/03/2018.
//

#include "Sqrt.h"

int Sqrt::sqrt(int x) {
    if(x == 0 || x == 1) return x;
    int i = 1, j = x;
    while(i <= j){
        int m = (i + j) / 2;
        if(m > x / m) j = m - 1;
        else if(m + 1 > x / (m + 1)) return m;
        else i = m + 1;
    }
    return 0;
}

void Sqrt::run() {
    assert(sqrt(4) == 2);
    assert(sqrt(8) == 2);
}
