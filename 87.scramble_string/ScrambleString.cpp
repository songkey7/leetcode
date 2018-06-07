//
// Created by Qi Song on 05/06/2018.
//

#include "ScrambleString.h"

bool ScrambleString::is_scramble(string s1, string s2) {
    if(s1 == s2) return true;
    size_t n = s1.length();
    int c_map[256] = {0};
    int len = 0;
    for (size_t i = 0; i < n; ++i) {
        if(++c_map[s1[i]] > 0) len++;
        else len--;
        if(--c_map[s2[i]] < 0) len++;
        else len--;
    }
    if(len != 0) return false;
    for (size_t i = 0; i < n - 1; ++i) {
        if((is_scramble(s1.substr(0, i + 1), s2.substr(0, i + 1)) && is_scramble(s1.substr(i + 1), s2.substr(i + 1)))
           || (is_scramble(s1.substr(0, i + 1), s2.substr(n - i - 1)) && is_scramble(s1.substr(i + 1), s2.substr(0, n - i - 1))))
            return true;
    }
    return false;
}

void ScrambleString::run() {
    assert(!is_scramble("abcdd", "dbdac"));
    assert(is_scramble("great", "rgeat"));
    assert(!is_scramble("abcde", "caebd"));
}


