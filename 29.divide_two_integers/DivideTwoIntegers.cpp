//
// Created by Qi Song on 21/03/2018.
//

#include "DivideTwoIntegers.h"

int DivideTwoIntegers::divide(int dividend, int divisor) {
    if(dividend == 0 || divisor == 1) return dividend;
    if(divisor == 0 || (dividend == INT_MIN && divisor == -1)) return INT_MAX;
    int flag = (dividend < 0) ^ (divisor < 0);
    long l_dividend = dividend; l_dividend = abs(l_dividend);
    long l_divisor = divisor; l_divisor = abs(l_divisor);
    int ret = 0;
    while(l_dividend >= l_divisor){
        long tmp = l_divisor;
        long x = 1;
        while((tmp << 1) <= l_dividend){
            tmp <<= 1;
            x <<= 1;
        }
        ret += x;
        l_dividend -= tmp;
    }

    if(flag) ret = 0 - ret;
    return ret;
}

void DivideTwoIntegers::run() {
    //assert(divide(15, 3) == 5);
    //assert(divide(1, -1) == -1);
    assert(divide(-2147483648, 2) == -1073741824);
}
