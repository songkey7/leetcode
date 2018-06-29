//
// Created by Qi Song on 14/06/2018.
//

#ifndef LEETCODE_MINIMUMHEIGHTTREES_H
#define LEETCODE_MINIMUMHEIGHTTREES_H


#include "../Base.h"

class MinimumHeightTrees: public Base {
    vector<int> find_min_height_trees(int n, vector<pair<int, int>>& edges);
public:
    void run();
};


#endif //LEETCODE_MINIMUMHEIGHTTREES_H
