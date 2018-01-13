//
// Created by Qi Song on 1/13/18.
//

#include "HammingDistance.h"

int HammingDistance::hamming_distance(int x, int y) {
    int ret = 0;
    while(x && y) {
        ret += (x & 0x1) ^ (y & 0x1);
        x = x>>1;
        y = y>>1;
    }
    while (x){
        ret += (x & 0x1);
        x = x>> 1;
    }
    while (y){
        ret += (y & 0x1);
        y = y>> 1;
    }
    return ret;
}

int HammingDistance::hamming_distance2(int x, int y) {
    bitset<32> xBS(x);
    bitset<32> yBS(y);
    int count = 0;
    for(int i = 0; i < 32; i++)
    {
        if(xBS[i] != yBS[i])
        {
            count++;
        }
    }
    return abs(count);
}

void HammingDistance::run() {
    assert(hamming_distance2(1,4) == 2);
}