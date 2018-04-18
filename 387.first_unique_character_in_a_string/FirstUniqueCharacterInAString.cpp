//
// Created by Qi Song on 18/04/2018.
//

#include "FirstUniqueCharacterInAString.h"

int FirstUniqueCharacterInAString::first_uniq_char(string s) {
    vector<int> c_map(128, 0);
    for(auto c: s) c_map[c]++;
    for(int i = 0; i < s.length(); i++){
        if(c_map[s[i]] == 1) return i;
    }
    return -1;
}

void FirstUniqueCharacterInAString::run() {
    assert(first_uniq_char("leetcode") == 0);
    assert(first_uniq_char("loveleetcode") == 2);
}
