//
// Created by Qi Song on 26/03/2018.
//

#include "RomanToInteger.h"

int RomanToInteger::roman_to_int(string s) {
    int n = s.length();
    int ret = c_map[s.back()];
    for(int i = 0; i < n - 1; i++){
        int tmp = c_map[s[i]];
        if(c_map[s[i + 1]] > tmp) ret -= tmp;
        else ret += tmp;
    }
    return ret;
}

void RomanToInteger::run() {
    assert(roman_to_int("DCXXI") == 621);
    assert(roman_to_int("MCMLXXXIV") == 1984);
}


