//
// Created by Qi Song on 12/07/2018.
//

#include "SudokuSolver.h"

void SudokuSolver::solve_sudoku(vector<vector<char>> &board) {
    solve_sudoku(board, 0, 0);
}

bool SudokuSolver::solve_sudoku(vector<vector<char>> &board, int i, int j) {
    if(i == 9) return true;
    if(j == 9) return solve_sudoku(board, i + 1, 0);
    if(board[i][j] != '.') return solve_sudoku(board, i, j + 1);
    for (char c = '1'; c <= '9' ; ++c) {
        if(valid(board, i, j, c)) {
            board[i][j] = c;
            if(solve_sudoku(board, i, j + 1)) return true;
            board[i][j] = '.';
        }
    }
    return false;
}

bool SudokuSolver::valid(vector<vector<char>> &board, int i, int j, char c) {
    for (int k = 0; k < 9; ++k)
        if(board[i][k] == c) return false;
    for (int k = 0; k < 9; ++k)
        if(board[k][j] == c) return false;
    for (int ii = 0; ii < 3; ++ii)
        for (int jj = 0; jj < 3; ++jj)
            if (board[i / 3 * 3 + ii][j / 3 * 3 + jj] == c) return false;
    return true;
}

void SudokuSolver::run() {
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},
                                  {'6','.','.','1','9','5','.','.','.'},
                                  {'.','9','8','.','.','.','.','6','.'},
                                  {'8','.','.','.','6','.','.','.','3'},
                                  {'4','.','.','8','.','3','.','.','1'},
                                  {'7','.','.','.','2','.','.','.','6'},
                                  {'.','6','.','.','.','.','2','8','.'},
                                  {'.','.','.','4','1','9','.','.','5'},
                                  {'.','.','.','.','8','.','.','7','9'}};
    vector<vector<char>> ret = {{'5','3','4','6','7','8','9','1','2'},
                                {'6','7','2','1','9','5','3','4','8'},
                                {'1','9','8','3','4','2','5','6','7'},
                                {'8','5','9','7','6','1','4','2','3'},
                                {'4','2','6','8','5','3','7','9','1'},
                                {'7','1','3','9','2','4','8','5','6'},
                                {'9','6','1','5','3','7','2','8','4'},
                                {'2','8','7','4','1','9','6','3','5'},
                                {'3','4','5','2','8','6','1','7','9'}};
    solve_sudoku(board);
    assert(board == ret);
}

