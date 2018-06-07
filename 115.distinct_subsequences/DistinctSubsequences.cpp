//
// Created by Qi Song on 02/06/2018.
//

#include "DistinctSubsequences.h"

int DistinctSubsequences::num_distinct(string s, string t) {
    int ns = s.length();
    int nt = t.length();
    if(ns < nt || nt == 0) return 0;
    if(s == t) return 1;
    int ret = 0;
    for (int i = 0; i <= ns - nt; ++i) {
        if(s[i] == t[0]){
            if(nt == 1) ret+=1;
            else ret += num_distinct(s.substr(i + 1), t.substr(1));
        }
    }
    return ret;
}

int DistinctSubsequences::num_distinct2(string s, string t) {
    int ns = s.length();
    int nt = t.length();
    vector<vector<int>> dp(nt + 1, vector<int>(ns + 1, 0));
    for (int i = 0; i <= ns; ++i) dp[0][i] = 1;
    for (int j = 0; j < ns; ++j) {
        for (int i = 0; i < nt; ++i) {
            dp[i + 1][j + 1] = dp[i + 1][j] + (t[i] == s[j] ? dp[i][j] : 0);
        }
    }
    return dp[nt][ns];
}

void DistinctSubsequences::run() {
    assert(num_distinct2("rabbbit", "rabbit") == 3);
    assert(num_distinct2("babgbag", "bag") == 5);
}


