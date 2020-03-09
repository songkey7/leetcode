//
// Created by songkey on 2020/3/8.
//

#include "RemovePalindromicSubsequences.h"

int RemovePalindromicSubsequences::removePalindromeSub(string s) {
    if(s.empty()) return 0;
    for (int i = 0, j = s.length() - 1; i <= j;) {
        if(s[i++] != s[j--]) return 2;
    }
    return 1;
}

void RemovePalindromicSubsequences::run() {
    assert(removePalindromeSub("ababa") == 1);
    assert(removePalindromeSub("baabb") == 2);
    assert(removePalindromeSub("abb") == 2);
    assert(removePalindromeSub("bbaabaaa") == 2);
}
