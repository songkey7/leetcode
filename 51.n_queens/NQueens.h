//
// Created by Qi Song on 11/07/2018.
//

#ifndef LEETCODE_NQUEENS_H
#define LEETCODE_NQUEENS_H


#include "../Base.h"

class NQueens: public Base {
    vector<vector<string>> solve_n_queens(int n);
public:
    void run();

    void sovle_n_queens(vector<string> &mask, int row, int n, vector<vector<string>> &ret);

    bool valid(vector<string> &mask, int row, int col, int n);
};


#endif //LEETCODE_NQUEENS_H
