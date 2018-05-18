//
// Created by Qi Song on 1/8/18.
//

#include <set>
#include "WordBreak.h"

bool WordBreak::word_break(const string &s, vector<string> &word_dict) {
    size_t n = s.length();
    if(n == 0 || word_dict.empty()) return false;

    unordered_set<string> word_map(word_dict.begin(), word_dict.end());
    vector<bool> dp(n + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j >= 0; --j) {
            if(dp[j] && word_map.find(s.substr(j, i - j + 1)) != word_map.end()){
                dp[i + 1] = true;
                break;
            }
        }
    }
    return dp[n];
}

void WordBreak::run(){
    string s = "freewheel";
    vector<string> dict = {"free", "wheel"};
    assert(word_break(s, dict));
}

