//
// Created by Qi Song on 29/03/2018.
//

#ifndef LEETCODE_SPIRALMATRIX_H
#define LEETCODE_SPIRALMATRIX_H


#include "../Base.h"

class SpiralMatrix: public Base {
    vector<int> spiral_order(vector<vector<int>>& matrix);
public:
    void run();
};


#endif //LEETCODE_SPIRALMATRIX_H
