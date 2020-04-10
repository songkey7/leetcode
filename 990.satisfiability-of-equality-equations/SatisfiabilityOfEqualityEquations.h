//
// Created by songkey on 2020/3/29.
//

#ifndef LEETCODE_SATISFIABILITYOFEQUALITYEQUATIONS_H
#define LEETCODE_SATISFIABILITYOFEQUALITYEQUATIONS_H


#include "../Base.h"

class SatisfiabilityOfEqualityEquations: public Base {
    bool equationsPossible(vector<string> equations);
    bool equationsPossible2(vector<string> equations);
    int find(int x, vector<int> & pre);
    bool dfs(unordered_map<char, set<char>> &graph, char s, char t, set<char> &visit);
public:
    void run() override ;

};


#endif //LEETCODE_SATISFIABILITYOFEQUALITYEQUATIONS_H
