//
// Created by Qi Song on 10/04/2018.
//

#ifndef LEETCODE_GAMEOFLIFE_H
#define LEETCODE_GAMEOFLIFE_H


#include "../Base.h"

class GameOfLife: public Base {
    void game_of_life(vector<vector<int>>& board);
    int neighbor_life(vector<vector<int>>& board, int i, int j, int m, int n);
public:
    void run();
};


#endif //LEETCODE_GAMEOFLIFE_H
