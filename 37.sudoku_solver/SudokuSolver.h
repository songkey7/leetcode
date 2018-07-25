//
// Created by Qi Song on 12/07/2018.
//

#ifndef LEETCODE_SUDOKUSOLVER_H
#define LEETCODE_SUDOKUSOLVER_H


#include "../Base.h"

class SudokuSolver: public Base {
    bool solve_sudoku(vector<vector<char>> &board, int i, int j) ;
    void solve_sudoku(vector<vector<char>>& board);
    bool valid(vector<vector<char>> &board, int i, int j, char c);
public:
    void run();

};


#endif //LEETCODE_SUDOKUSOLVER_H
