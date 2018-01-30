//
// Created by Qi Song on 1/30/18.
//

#include "LongestSubstringWithoutRepeatingCharacters.h"

int LongestSubstringWithoutRepeatingCharacters::length_of_longest_substring(string s) {
    vector<int> vec(256, -1);
    int ret = 0;
    int cnt = 0;
    int b = 0;
    size_t n = s.length();
    for(int i = 0; i < n; i++){
        int j = vec[s[i]];
        if(j >= 0){
            for(int k = b; k <= j; k++){
                vec[s[k]] = -1;
                cnt--;
            }
            b = j + 1;
        }
        ret = max(ret, ++cnt);
        vec[s[i]] = i;
    }
    return ret;
}

void LongestSubstringWithoutRepeatingCharacters::run() {
//    string s1 = "abcabcbb";
//    assert(length_of_longest_substring(s1) == 3);
//    string s2 = "bbbbb";
//    assert(length_of_longest_substring(s2) == 1);
    string s3 = "bpfbhmipx";
    assert(length_of_longest_substring(s3) == 7);
}
