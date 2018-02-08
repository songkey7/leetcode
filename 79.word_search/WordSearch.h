//
// Created by Qi Song on 2/7/18.
//

#ifndef LEETCODE_WORDSEARCH_H
#define LEETCODE_WORDSEARCH_H


#include "../Base.h"

class WordSearch: public Base {
    bool exist(vector<vector<char>>& board, string word);
    bool search(vector<vector<char>> &board, unordered_map<char, vector<pair<int, int>>> & c_index, string word, int idx, int i, int j, int m, int n);
public:
    void run();

};


#endif //LEETCODE_WORDSEARCH_H
