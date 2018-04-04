//
// Created by Qi Song on 04/04/2018.
//

#include "WordBreak2.h"

vector<string> WordBreak2::word_break(string s, vector<string> &word_dict) {
    unordered_set<string> word_set(word_dict.begin(), word_dict.end());
    vector<string> ret = dfs(s, word_set);
    return ret;
}

vector<string> WordBreak2::dfs(string s, unordered_set<string> &word_dict) {
    size_t n = s.length();
    if(s_map.find(s) != s_map.end()){
        return s_map[s];
    }
    vector<string> ret;
    for(int l = 1; l <= n; l++){
        string tmp = s.substr(0, l);
        if(word_dict.find(tmp) != word_dict.end()){
            if(l == n){
                ret.push_back(tmp);
            } else{
                for(auto ss: dfs(s.substr(l), word_dict)){
                    ret.push_back(tmp + " " + ss);
                }
            }
        }
    }
    s_map[s] = ret;
    return ret;
}

void WordBreak2::run() {
    string s = "catsanddog";
    vector<string> word_dict = {"cat", "cats", "and", "sand", "dog"};
    vector<string> ret = {"cat sand dog", "cats and dog"};
    assert(word_break(s, word_dict) == ret);
}

