//
// Created by Qi Song on 1/9/18.
//

#ifndef LEETCODE_FRIENDCIRCLES_H
#define LEETCODE_FRIENDCIRCLES_H


#include "../Base.h"

class FriendCircles: public Base {
public:
    void run();

private:
    int findCircleNum(vector<vector<int>>& M);
    void DFS(int i, vector<vector<int>> &M, unordered_set<int> &visit);
};


#endif //LEETCODE_FRIENDCIRCLES_H
