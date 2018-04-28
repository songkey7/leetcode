//
// Created by Qi Song on 2/5/18.
//

#include "LongestPalindromicSubstring.h"

string LongestPalindromicSubstring::longest_palindrome(string s) {
    int n = s.length();
    string ret = "";
    for(int i = 0; i < n; i++){
        for(int j = 0; i >= j && i + j < n && s[i - j] == s[i + j]; j++){
            if(2 * j + 1 > ret.length()) ret = s.substr(i - j, j * 2 + 1);
        }
        for(int j = 0; i >= j && i + j + 1 < n && s[i - j] == s[i + j + 1]; j++){
            if(2 * j + 2 > ret.length()) ret = s.substr(i - j, j * 2 + 2);
        }
    }
    return ret;
}

string LongestPalindromicSubstring::longest_palindrome2(string s) {
    int n = s.length();
    vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
    int b = 0;
    int l = 1;
    for(int i = 0; i < n; i++){
        dp[i][i] = true;
        for(int j = 0; j < i; j++){
            if(s[i] == s[j] && (dp[j+1][i-1] || j + 1 == i)) dp[j][i] = true;
            if(dp[j][i] && i - j + 1 > l){
                b = j, l = i - j + 1;
            }
        }
    }
    return s.substr(b, l);
}

void LongestPalindromicSubstring::run() {
    assert(longest_palindrome("babad") == "bab");
    assert(longest_palindrome("cbbd") == "bb");
    assert(longest_palindrome2("abcda") == "a");
    assert(longest_palindrome2("aaaa") == "aaaa");
}

