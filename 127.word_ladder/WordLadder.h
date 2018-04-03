//
// Created by Qi Song on 03/04/2018.
//

#ifndef LEETCODE_WORDLADDER_H
#define LEETCODE_WORDLADDER_H


#include "../Base.h"

class WordLadder: public Base {
    int ladder_length_dfs(string begin_word, string end_word, vector<string>& word_list);
    int ladder_length_bfs(string begin_word, string end_word, vector<string>& word_list);
    bool distance1(string s1, string s2);
    void add_next_words(string word, unordered_set<string>& word_dict, queue<string>& toVisit);
    unordered_map<string, bool> v_map;
public:
    void run();
};


#endif //LEETCODE_WORDLADDER_H
