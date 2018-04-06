//
// Created by Qi Song on 06/04/2018.
//

#include "HappyNumber.h"

bool HappyNumber::is_happy(int n) {
    if(n == 1) return true;
    if(visit_map.find(n) != visit_map.end()) return false;
    visit_map.insert(n);
    int sum = 0;
    while(n){
        int tmp = (n % 10);
        sum += tmp * tmp;
        n /= 10;
    }
    return is_happy(sum);
}

void HappyNumber::run() {
    assert(is_happy(19));
}
