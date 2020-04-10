//
// Created by Qi Song on 26/03/2018.
//

#include "StringToInteger.h"

int StringToInteger::atoi(string str) {
    bool flag = true;
    long ret = 0;
    int sign = 1;
    for (char i : str) {
        if(flag && i == ' ') continue;
        if(flag && i == '+') {
            flag = false;
            continue;
        }
        if(flag && i == '-') {
            sign = -1;
            flag = false;
            continue;
        }
        if(!isdigit(i)){
            break;
        }
        if(flag) flag = false;
        ret = ret * 10 + (i - '0') * sign;
        if(ret > INT_MAX) return INT_MAX;
        if(ret < INT_MIN) return INT_MIN;
    }
    return ret;
}

void StringToInteger::run() {
    assert(atoi("9223372036854775809") == 2147483647);
    assert(atoi("+1") == 1);
    assert(atoi("+-1") == 0);
    assert(atoi("1233") == 1233);
    assert(atoi("   -1233a") == -1233);
}


