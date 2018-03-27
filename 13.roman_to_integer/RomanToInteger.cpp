//
// Created by Qi Song on 26/03/2018.
//

#include "RomanToInteger.h"

int RomanToInteger::roman_to_int(string s) {
    int ret = 0;
    int pre = 0;
    size_t n = s.length();
    for(int i = 0; i < n; i++){
        int d = c_map[s[i]];
        if(d > pre){
            pre = d - pre;
        }
        else{
            pre += d;
        }
        if(i + 1 < n && d > c_map[s[i+1]]){
            ret += pre;
            pre = 0;
        }
    }
    return ret + pre;
}

int RomanToInteger::roman_to_int2(string s) {
    int sum = c_map[s.back()];
    for (int i = s.length() - 2; i >= 0; --i)
    {
        if (c_map[s[i]] < c_map[s[i + 1]])
        {
            sum -= c_map[s[i]];
        }
        else
        {
            sum += c_map[s[i]];
        }
    }
    return sum;
}

void RomanToInteger::run() {
    assert(roman_to_int2("DCXXI") == 621);
    assert(roman_to_int2("MCMLXXXIV") == 1984);
}


