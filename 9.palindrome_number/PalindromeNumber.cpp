//
// Created by Qi Song on 2/5/18.
//

#include "PalindromeNumber.h"

bool PalindromeNumber::is_palindrome(int x) {
    if(x < 0 || (x > 0 && x % 10 == 0)) return false;
    int ret = 0;
    while(x > ret){
        ret = ret * 10 + x % 10;
        x /= 10;
    }
    return ret == x || ret / 10 == x;
}

void PalindromeNumber::run() {
    assert(is_palindrome(12321));
    assert(!is_palindrome(-2147447412));
}
