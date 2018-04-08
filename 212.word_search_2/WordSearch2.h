//
// Created by Qi Song on 07/04/2018.
//

#ifndef LEETCODE_WORDSEARCH2_H
#define LEETCODE_WORDSEARCH2_H


#include <utility>

#include "../Base.h"

class WordSearch2: public Base {
    struct TrieNode{
        bool _leaf;
        char _c;
        TrieNode * _children[26] = {nullptr};
        explicit TrieNode(char c): _c(c){
            _leaf = false;
        }
    };

    TrieNode * build_trie(vector<string> &words);

    vector<string> find_words(vector<vector<char>>& board, vector<string> &words);
    void dfs(vector<vector<char>> &board, int i, int j, int m, int n, TrieNode *root, string &s, vector<string> &ret);

public:
    void run();

};


#endif //LEETCODE_WORDSEARCH2_H
