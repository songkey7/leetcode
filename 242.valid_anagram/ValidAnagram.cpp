//
// Created by Qi Song on 10/04/2018.
//

#include "ValidAnagram.h"

bool ValidAnagram::is_anagram(string s, string t) {
    if(s.length() != t.length()) return false;
    unordered_map<char, int> c_map;
    for(int i = 0; i < s.length(); i++){
        c_map[s[i]]++;
        c_map[t[i]]--;
    }
    for(auto c: c_map){
        if(c.second != 0) return false;
    }
    return true;
}

void ValidAnagram::run() {
    assert(is_anagram("anagram", "nagaram"));
    assert(!is_anagram("rat", "car"));
}
