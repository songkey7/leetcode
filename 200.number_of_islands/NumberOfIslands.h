//
// Created by Qi Song on 2/1/18.
//

#ifndef LEETCODE_NUMBEROFISLANDS_H
#define LEETCODE_NUMBEROFISLANDS_H


#include "../Base.h"

class NumberOfIslands: public Base {
    int num_islands(vector<vector<char>> &grid);
    bool search(vector<vector<char>> &grid, int i, int j, size_t m, size_t n, vector<vector<char>> & mask);
public:
    void run();

};


#endif //LEETCODE_NUMBEROFISLANDS_H
