//
// Created by songkey on 2020/3/1.
//

#include "RansomNote.h"

bool RansomNote::canConstruct(string ransomNote, string magazine) {
    int c_map[26] = {0};
    for(auto c: magazine){
       c_map[c - 'a']++;
    }
    for(auto c: ransomNote) {
        if (--c_map[c - 'a'] < 0) return false;
    }
    return true;
}

void RansomNote::run() {
    assert(!canConstruct("a", "b"));
    assert(!canConstruct("aa", "ab"));
    assert(canConstruct("aa", "aab"));
}
