//
// Created by Qi Song on 04/04/2018.
//

#include "SurroundedRegions.h"

void SurroundedRegions::solve(vector<vector<char>> &board) {
    size_t m = board.size();
    if(m < 3) return;
    size_t n = board[0].size();
    if(n < 3) return;
    for(int j = 0; j < n; j++){
        if(board[0][j] == 'O'){
            dfs(board, 0, j);
        }
        if(board[m - 1][j] == 'O'){
            dfs(board, m - 1, j);
        }
    }
    for(int i = 0; i < m; i++){
        if(board[i][0] == 'O'){
            dfs(board, i, 0);
        }
        if(board[i][n - 1] == 'O'){
            dfs(board, i, n - 1);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 'O') board[i][j] = 'X';
            if(board[i][j] == '.') board[i][j] = 'O';
        }
    }
}

void SurroundedRegions::dfs(vector<vector<char>> &board, int i, int j) {
    size_t m = board.size() - 1;
    size_t n = board[0].size() - 1;
    if(i < 0 || j < 0 || i > m || j > n) return;
    if(board[i][j] == 'O') board[i][j] = '.';
    if(i >= 1 && board[i - 1][j] == 'O') dfs(board, i - 1, j);
    if(i + 1 <= m && board[i + 1][j] == 'O') dfs(board, i + 1, j);
    if(j >= 1 && board[i][j - 1] == 'O') dfs(board, i, j - 1);
    if(j + 1 <= n && board[i][j + 1] == 'O') dfs(board, i, j + 1);
}

void SurroundedRegions::run() {
    vector<vector<char>> board = {
            {'X', 'X', 'X', 'X'},
            {'X', 'O', 'O', 'X'},
            {'X', 'X', 'O', 'X'},
            {'X', 'O', 'X', 'X'}
    };
    vector<vector<char>> ret = {
            {'X', 'X', 'X', 'X'},
            {'X', 'X', 'X', 'X'},
            {'X', 'X', 'X', 'X'},
            {'X', 'O', 'X', 'X'}
    };
    solve(board);
    assert(board == ret);
}


