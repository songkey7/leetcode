//
// Created by Qi Song on 1/8/18.
//

#include "PalindromicSubstrings.h"

int PalindromicSubstrings::count_substrings(string s){
    unsigned long n = s.length();
    int cnt = 0;
    for(int i = 0; i < n; ++i){
       for(int j = 0; i - j >= 0 && i + j < n; ++j) {
           if(s[i-j] == s[i+j]) cnt++;
           else break;
       }
       for(int j = 0; i - j >= 0 && i + j + 1 < n; ++j) {
           if(s[i-j] == s[i+j+1]) cnt++;
           else break;
       }
    }
    return cnt;
}

int PalindromicSubstrings::run() {
    cout << count_substrings("abc") << endl;
    cout << count_substrings("aaa") << endl;
}
