//
// Created by songkey on 2019/4/6.
//

#include "NumberOfDigitOne.h"

int NumberOfDigitOne::countDigitOne(int n) {
    if(n < 1) return 0;
    vector<int> dp(n + 1, 1);
    vector<int> dp2(n + 1, 0);
    dp2[1] = 1;
    for(int i = 10; i <= n; i++){
        dp2[i] = dp2[i / 10] + dp2[i % 10];
        dp[i] = dp[i - 1] + dp2[i];
    }
    return dp[n];
}

int NumberOfDigitOne::countDigitOne2(int n) {
    int ret = 0;
    for(int m = 1; m <= n; m*=10){
        int a = n/m, b = n%m;
        ret += (a + 8) / 10 * m + (a % 10 == 1) * (b + 1);
    }
    return ret;
}

void NumberOfDigitOne::run() {
    assert(countDigitOne2(13) == 6);
    assert(countDigitOne2(213) == 146);
}


