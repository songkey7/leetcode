//
// Created by Qi Song on 07/03/2018.
//

#include "RegularExpressionMatching.h"

bool RegularExpressionMatching::is_match(string s, string p) {
    int ns = s.length();
    int np = p.length();
    vector<vector<bool>> dp(ns + 1, vector<bool>(np + 1, false));
    dp[0][0] = true;
    for (int i = 0; i <= ns; ++i) {
        for (int j = 1; j <= np; ++j) {
            if(p[j - 1] != '*')
                dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
            else{
                dp[i][j] = j > 1 && (dp[i][j - 2] || (i > 0 && dp[i - 1][j] && (p[j - 2] == '.' || p[j - 2] == s[i - 1])));
            }
        }
    }
    return dp[ns][np];
}

void RegularExpressionMatching::run() {
    assert(!is_match("aaa","ab*a"));
    assert(is_match("aa","aa"));
    assert(!is_match("aaa","aa"));
    assert(is_match("aa", "a*"));
    assert(is_match("aa", ".*"));
    assert(is_match("ab", ".*"));
    assert(is_match("aab", "c*a*b"));
    assert(!is_match("mississippi","mis*is*p*."));
}
