//
// Created by Qi Song on 11/04/2018.
//

#include "PowerOfThree.h"

bool PowerOfThree::is_power_of_three(int n) {
    while(n){
        if(n == 1) return true;
        if(n % 3) return false;
        n /= 3;
    }
    return false;
}

void PowerOfThree::run() {
    assert(is_power_of_three(27));
    assert(!is_power_of_three(15));
}
