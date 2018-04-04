//
// Created by Qi Song on 04/04/2018.
//

#ifndef LEETCODE_WORDBREAK2_H
#define LEETCODE_WORDBREAK2_H


#include "../Base.h"

class WordBreak2: public Base {
    vector<string> word_break(string s, vector<string>& word_dict);
    vector<string> dfs(string s, unordered_set<string>& word_dict);
    unordered_map<string, vector<string>> s_map;
public:
    void run();
};


#endif //LEETCODE_WORDBREAK2_H
