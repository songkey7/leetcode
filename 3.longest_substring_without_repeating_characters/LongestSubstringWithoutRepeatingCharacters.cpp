//
// Created by Qi Song on 1/30/18.
//

#include "LongestSubstringWithoutRepeatingCharacters.h"

int LongestSubstringWithoutRepeatingCharacters::length_of_longest_substring(string s) {
    int n = s.length();
    if(n < 2) return n;
    vector<int> c_map(128, 0);
    int i = 0, j = 1;
    c_map[s[i]]++;
    int ret = 1;
    for(; j < n; j++){
        c_map[s[j]]++;
        while(c_map[s[j]] > 1){
            c_map[s[i++]]--;
        }
        ret = max(ret, j - i + 1);
    }
    return ret;
}

void LongestSubstringWithoutRepeatingCharacters::run() {
    string s1 = "abcabcbb";
    assert(length_of_longest_substring(s1) == 3);
    string s2 = "bbbbb";
    assert(length_of_longest_substring(s2) == 1);
    string s3 = "bpfbhmipx";
    assert(length_of_longest_substring(s3) == 7);
}
