//
// Created by Qi Song on 2/5/18.
//

#include "LongestPalindromicSubstring.h"

string LongestPalindromicSubstring::longest_palindrome(string s) {
    size_t n = s.length();
    string ret;
    size_t l = 0, len = 0;
    for(int i = 0; i < n; i++) {
        for (int j = 0; i - j >= 0 && i + j < n && s[i - j] == s[i + j]; j++) {
            if (len < 2 * j + 1) {
                l = i - j;
                len = 2 * j + 1;
            }
        }
        for (int j = 0; i - j >= 0 && i + j + 1 < n && s[i - j] == s[i + j + 1]; j++) {
            if (len < 2 * j + 2){
                l = i - j;
                len = 2 * j + 2;
            }
        }
    }
    return ret = s.substr(l, len);
}

string LongestPalindromicSubstring::longest_palindrome2(string s) {
    size_t n = s.length();
    if(n == 0) return std::string();
    if(n == 1) return s;
    int dp[n][n];
    memset(dp, 0, n * n * sizeof(int));
    int max_len = 1;
    int b = 0;
    for(int i = 0; i < n; i++){
        dp[i][i] = 1;
        for(int j = 0; j < i; j++){
            dp[i][j] = s[i] == s[j] && (i - j < 2 || dp[i - 1][j + 1]);
            if(dp[i][j] && i - j + 1 > max_len){
                b = j;
                max_len = i - j + 1;
            }
        }
    }
    return s.substr(b, max_len);
}

void LongestPalindromicSubstring::run() {
    assert(longest_palindrome("babad") == "bab");
    assert(longest_palindrome("cbbd") == "bb");
    assert(longest_palindrome("abcda") == "a");
    assert(longest_palindrome("aaaa") == "aaaa");
}

