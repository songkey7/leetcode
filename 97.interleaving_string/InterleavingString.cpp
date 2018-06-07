//
// Created by Qi Song on 04/06/2018.
//

#include "InterleavingString.h"

bool InterleavingString::is_interleave(string s1, string s2, string s3) {
    if(s1.empty()) return s2 == s3;
    if(s2.empty()) return s1 == s3;
    return (s1[0] == s3[0] && is_interleave(s1.substr(1), s2, s3.substr(1)))
           || (s2[0] == s3[0] && is_interleave(s1, s2.substr(1), s3.substr(1)));
}

bool InterleavingString::is_interleave2(string s1, string s2, string s3) {
    size_t n1 = s1.length(), n2 = s2.length(), n3 = s3.length();
    if(n1 + n2 != n3) return false;
    vector<bool> dp(n2 + 1, 0);
    for (int i = 0; i <= n1; ++i) {
        for (int j = 0; j <= n2; ++j) {
            dp[j] = (i == 0 && j == 0)
                    || (i > 0 && s1[i - 1] == s3[i + j - 1] && dp[j])
                    || (j > 0 && s2[j - 1] == s3[i + j - 1] && dp[j - 1]);
        }
    }
    return dp[n2];
}

void InterleavingString::run() {
    assert(is_interleave2("aabcc", "dbbca", "aadbbcbcac"));
    assert(!is_interleave2("aabcc", "dbbca", "aadbbbaccc"));
}


