//
// Created by Qi Song on 02/04/2018.
//

#include "DecodeWays.h"

int DecodeWays::num_decodings(string s) {
    int n = s.length();
    if(n == 0 || s[0] == '0') return 0;
    vector<int> dp(n + 1, 1);
    for (int i = 1; i < n; ++i) {
        dp[i + 1] = (s[i] > '0') ? dp[i] : 0;
        int tmp = (s[i - 1] - '0') * 10 + (s[i] - '0');
        if(tmp >= 10 && tmp <= 26) dp[i + 1] += dp[i - 1];
    }
    return dp[n];
}

void DecodeWays::run() {
    assert(num_decodings("0") == 0);
    assert(num_decodings("120") == 1);
    assert(num_decodings("27") == 1);
    assert(num_decodings("101") == 1);
}


