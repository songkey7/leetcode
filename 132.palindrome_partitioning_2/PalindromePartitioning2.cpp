//
// Created by songkey on 2018/5/31.
//

#include "PalindromePartitioning2.h"

int PalindromePartitioning2::min_cut(string s) {
    size_t n = s.length();
    if(n < 2) return 0;
    vector<vector<bool>> palindrome(n, vector<bool>(n, false));
    vector<int> dp(n, n - 1);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if(s[i] == s[j] && (i - j < 2 || palindrome[j + 1][i - 1])){
                palindrome[j][i] = true;
                if(j == 0) dp[i] = 0;
                else dp[i] = min(dp[i], dp[j - 1] + 1);
            }
        }
    }
    return dp[n - 1];
}

void PalindromePartitioning2::run() {
    assert(min_cut("aab") == 1);
}


