//
// Created by Qi Song on 04/04/2018.
//

#ifndef LEETCODE_PALINDROMEPARTITIONING_H
#define LEETCODE_PALINDROMEPARTITIONING_H


#include "../Base.h"

class PalindromePartitioning: public Base {
    vector<vector<string>> partition(string s);
    void dfs(string s, unordered_map<int, vector<int>> & graph, int i, vector<string> &vec, vector<vector<string>> &out);
public:
    void run();
};


#endif //LEETCODE_PALINDROMEPARTITIONING_H
