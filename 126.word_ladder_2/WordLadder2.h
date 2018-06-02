//
// Created by songkey on 2018/6/1.
//

#ifndef LEETCODE_WORDLADDER2_H
#define LEETCODE_WORDLADDER2_H


#include "../Base.h"

class WordLadder2: public Base {
    vector<vector<string>> find_ladders(string beginWord, string endWord, vector<string>& wordList);
    void dfs(vector<string> &wordList, string endWord, vector<vector<bool>>& dp, int i, vector<string> out, vector<vector<string>> &ret);
    bool distance1(string s1, string s2);
public:
    void run();
};


#endif //LEETCODE_WORDLADDER2_H
