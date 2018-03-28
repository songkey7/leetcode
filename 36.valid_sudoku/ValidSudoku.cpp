//
// Created by Qi Song on 28/03/2018.
//

#include "ValidSudoku.h"

bool ValidSudoku::is_valid_sudoku(vector<vector<char>> &board) {
    for(int i = 0; i < 9; i++){
        char c_map_h[9] = {0};
        char c_map_v[9] = {0};
        for(int j = 0; j < 9; j++){
            char h = board[i][j];
            if(h != '.'){
                h = h - '1';
                if(c_map_h[h] == 1) return false;
                c_map_h[h] = 1;
            }
            char v = board[j][i];
            if(v != '.'){
                v = v - '1';
                if(c_map_v[v] == 1) return false;
                c_map_v[v] = 1;
            }
        }
    }

    for(int i = 0; i < 9; i+=3){
        for(int j = 0; j < 9; j+=3){
            char c_map[9] = {0};
            for(int ii = 0; ii < 3; ii++){
                for(int jj = 0; jj < 3; jj++){
                    char c = board[i + ii][j + jj];
                    if(c != '.'){
                        c = c - '1';
                        if(c_map[c] == 1) return false;
                        c_map[c] = 1;
                    }
                }
            }
        }
    }
    return true;
}

void ValidSudoku::run() {
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},
                                  {'6','.','.','1','9','5','.','.','.'},
                                  {'.','9','8','.','.','.','.','6','.'},
                                  {'8','.','.','.','6','.','.','.','3'},
                                  {'4','.','.','8','.','3','.','.','1'},
                                  {'7','.','.','.','2','.','.','.','6'},
                                  {'.','6','.','.','.','.','2','8','.'},
                                  {'.','.','.','4','1','9','.','.','5'},
                                  {'.','.','.','.','8','.','.','7','9'}};
    assert(is_valid_sudoku(board));

}
