//
// Created by Qi Song on 2/7/18.
//

#ifndef LEETCODE_WORDSEARCH_H
#define LEETCODE_WORDSEARCH_H


#include "../Base.h"

class WordSearch: public Base {
    bool exist(vector<vector<char>>& board, string word);
    bool dfs(vector<vector<char>> &board, int m, int n, int i, int j, string word, int idx);
public:
    void run();

};

#endif //LEETCODE_WORDSEARCH_H
