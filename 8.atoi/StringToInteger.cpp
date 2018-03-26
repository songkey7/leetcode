//
// Created by Qi Song on 26/03/2018.
//

#include "StringToInteger.h"

int StringToInteger::atoi(string str) {
    long ret = 0;
    bool beg = false;
    bool sign = false;
    for(auto c: str){
        bool digit = c <= '9' && c >= '0';
        if(!beg){
            beg = true;
            if(c == '-'){
                sign = true;
                continue;
            } else if(c == '+'){
                continue;
            } else if(digit){
                ;
            } else if(c == ' '){
                beg = false;
                continue;
            }
        }

        if(beg){
            if(digit) ret = ret * 10 + c - '0';
            else break;
            if(ret > INT_MAX) break;
        }
    }

    if(sign) ret = 0 - ret;
    if(ret > INT_MAX) return INT_MAX;
    if(ret < INT_MIN) return INT_MIN;
    return static_cast<int>(ret);
}

void StringToInteger::run() {
    assert(atoi("9223372036854775809") == 2147483647);
//    assert(atoi("+1") == 1);
//    assert(atoi("+-1") == 0);
//    assert(atoi("1233") == 1233);
//    assert(atoi("   -1233a") == -1233);
}


