//
// Created by Qi Song on 2/27/18.
//

#include "MinimumWindowSubstring.h"

string MinimumWindowSubstring::min_window2(string s, string t) {
    int c_map[256] = {0};
    for(auto c: t) c_map[c]++;
    size_t b = 0, e = 0, p_b = 0, len = INT_MAX;
    size_t n = s.length(), count = t.length();
    while(e < n) {
        if(c_map[s[e++]]-- > 0) count--;
        while(count == 0) {
            size_t d = (e - p_b);
            if(d < len){
                b = p_b;
                len = d;
            }
            if(c_map[s[p_b++]]++ >= 0) count++;
        }
    }
    return len == INT_MAX ? "" : s.substr(b, len);
}

string MinimumWindowSubstring::min_window(string s, string t) {
    unordered_map<char, int> c_map;
    unordered_map<char, int> c_target_map;
    for(auto c: t){
        c_target_map[c]++;
        c_map[c]=0;
    }
    int b = 0, e = s.length() + 1;
    int cur_b = b;
    for(int i = 0; i < s.length(); i++){
        if(c_map.find(s[i]) != c_map.end()){
            c_map[s[i]]++;
            int j = cur_b;
            for(; contain(c_map, c_target_map); j++){
                if(c_map.find(s[j]) != c_map.end()){
                    c_map[s[j]]--;
                    if(i - j < e - b){
                        e = i;
                        b = j;
                    }
                }
            }
            cur_b = j;
        }
    }
    return e - b > s.length() ? "" : s.substr(b, e - b + 1);
}

bool MinimumWindowSubstring::contain(const unordered_map<char, int> & c_map, const unordered_map<char, int> & c_target_map) {
    for(auto c: c_target_map){
        if(c_map.find(c.first)->second < c.second) return false;
    }
    return true;
}

void MinimumWindowSubstring::run() {
    assert(min_window2("ADOBECODEBANC", "ABC") == "BANC");
}


