//
// Created by Qi Song on 30/06/2018.
//

#include "LongestPalindromicSubsequence.h"

int LongestPalindromicSubsequence::longest_palindrome_subseq(string s) {
    int n = s.length();
    if(n < 2) return n;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        dp[i][i] = 1;
        for (int j = i - 1; j >= 0; --j) {
            if(s[j] == s[i])
                dp[j][i] = dp[j + 1][i - 1] + 2;
            else
                dp[j][i] = max(dp[j][i - 1], dp[j + 1][i]);
        }
    }
    return dp[0][n - 1];
}

void LongestPalindromicSubsequence::run() {
    assert(longest_palindrome_subseq("aabaaba") == 6);
    assert(longest_palindrome_subseq("bbbab") == 4);
    assert(longest_palindrome_subseq("cbbd") == 2);
}
