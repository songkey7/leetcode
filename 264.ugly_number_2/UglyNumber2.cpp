//
// Created by Qi Song on 27/06/2018.
//

#include "UglyNumber2.h"

int UglyNumber2::nth_ugly_number(int n) {
    vector<int> ret(1, 1);
    int p2 = 0, p3 = 0, p5 = 0;
    while(ret.size() < n){
        int tmp = min(ret[p2] * 2, min(ret[p3] * 3, ret[p5] * 5));
        if(tmp == ret[p2] * 2) p2++;
        if(tmp == ret[p3] * 3) p3++;
        if(tmp == ret[p5] * 5) p5++;
        ret.push_back(tmp);
    }
    return ret[n - 1];
}

void UglyNumber2::run() {
    assert(nth_ugly_number(11) == 15);
    assert(nth_ugly_number(10) == 12);
}
