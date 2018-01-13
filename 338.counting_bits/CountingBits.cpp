//
// Created by Qi Song on 1/13/18.
//

#include "CountingBits.h"

vector<int> CountingBits::count_bits(int num) {
    if(num == 0)
        return {0};
    if(num == 1)
        return {0,1};

    vector<int> ret(num + 1, 0);
    ret[1] = 1;
    for(int i = 2; ;i = i << 1){
        int j = 0;
        for(; j < i && i + j <= num; j++){
            ret[j + i] = ret[j] + 1;
        }
        if(i + j > num) break;
    }
    return ret;
}

void CountingBits::run() {
    vector<int> ret = {0,1,1,2,1,2,2,3,1};
    assert(count_bits(8) == ret);
}
