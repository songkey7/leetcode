//
// Created by songkey on 2019/3/10.
//

#ifndef LEETCODE_ROTTINGORANGES_H
#define LEETCODE_ROTTINGORANGES_H


#include "../Base.h"

class RottingOranges: public Base {
    int orangesRotting(vector<vector<int>>& grid);
    bool rotting(vector<vector<int>> &grid, int i, int j, int m, int n);
public:
    void run() override;

};


#endif //LEETCODE_ROTTINGORANGES_H
