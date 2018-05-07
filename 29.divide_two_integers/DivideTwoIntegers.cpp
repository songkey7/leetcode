//
// Created by Qi Song on 21/03/2018.
//

#include "DivideTwoIntegers.h"

int DivideTwoIntegers::divide(int dividend, int divisor) {
    if(divisor == 0) return dividend > 0 ? INT_MAX : INT_MIN;
    if(divisor == 1) return dividend;
    if(divisor == -1) return (dividend == INT_MIN) ? INT_MAX : -dividend;

    int flag = 0;
    long l_dividend = dividend;
    long l_divisor = divisor;
    if(dividend < 0){
        l_dividend = 0 - l_dividend;
        flag++;
    }
    if(divisor < 0){
        l_divisor = 0 - l_divisor;
        flag++;
    }

    int ret = 0;
    while(l_divisor <= l_dividend){
        long tmp = l_divisor;
        long idx = 1;
        while((tmp << 1) <= l_dividend){
            tmp <<= 1;
            idx <<= 1;
        }
        ret += idx;
        l_dividend -= tmp;
    }

    return flag == 1 ? 0 - ret : ret;
}

void DivideTwoIntegers::run() {
    assert(divide(15, 3) == 5);
    assert(divide(1, -1) == -1);
    assert(divide(-2147483648, 2) == -1073741824);
}
