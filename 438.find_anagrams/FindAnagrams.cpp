//
// Created by Qi Song on 1/13/18.
//

#include "FindAnagrams.h"

vector<int> FindAnagrams::find_anagrams(string s, string p) {
    size_t ns = s.length();
    size_t np = p.length();
    vector<int> vs(26, 0);
    vector<int> vp(26, 0);
    vector<int> ret;
    int i = 0;
    for(; i < np; ++i){
        vs[s[i] - 'a']++;
        vp[p[i] - 'a']++;
    }
    if(vs == vp) ret.push_back(0);
    for(; i < ns; i++){
        vs[s[i] - 'a'] ++;
        vs[s[i - np] - 'a'] --;
        if(vs == vp) ret.push_back(i - np + 1);
    }
    return ret;
}

void FindAnagrams::run() {
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> ret = {0, 6};
    assert(find_anagrams(s, p) == ret);
}