//
// Created by Qi Song on 28/03/2018.
//

#include "LongestSubstringWithAtLeastKRepeatingCharacters.h"

int LongestSubstringWithAtLeastKRepeatingCharacters::longest_substring(string s, int k) {
    int n = s.length();
    if(n < k) return 0;
    unordered_map<char, vector<int>> c_map;
    for(int i = 0; i < n; i++){
        c_map[s[i]].push_back(i);
    }
    vector<int> idxs;
    for(auto itr: c_map){
        if(itr.second.size() < k){
            for(auto idx : itr.second){
                idxs.push_back(idx);
            }
        }
    }
    if(idxs.empty()) return n;
    else{
        int ret = 0;
        int b = 0;
        sort(idxs.begin(), idxs.end());
        idxs.push_back(n);
        for(auto e: idxs){
            ret = max(longest_substring(s.substr(b, e - b), k), ret);
            b = e + 1;
        }
        return ret;
    }
}

void LongestSubstringWithAtLeastKRepeatingCharacters::run() {
    //assert(longest_substring("aaabb", 3) == 3);
    //assert(longest_substring("ababbc", 2) == 5);
    //assert(longest_substring("weitong", 2) == 0);
    assert(longest_substring("bbaaacbd", 3) == 3);
}
