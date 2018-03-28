//
// Created by Qi Song on 28/03/2018.
//

#ifndef LEETCODE_VALIDSUDOKU_H
#define LEETCODE_VALIDSUDOKU_H


#include "../Base.h"

class ValidSudoku: public Base {
    bool is_valid_sudoku(vector<vector<char>> &board);
public:
    void run();
};


#endif //LEETCODE_VALIDSUDOKU_H
