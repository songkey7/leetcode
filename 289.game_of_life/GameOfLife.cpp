//
// Created by Qi Song on 10/04/2018.
//

#include "GameOfLife.h"

void GameOfLife::game_of_life(vector<vector<int>> &board) {
    int m = board.size();
    if(m == 0) return;
    int n = board[0].size();
    vector<vector<int>> ret(m, vector<int>(n, 0));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int cnt = neighbor_life(board, i, j, m, n);
            if(cnt == 3) ret[i][j] = 1;
            if(cnt == 2) ret[i][j] = board[i][j];
        }
    }
    board = ret;
}

int GameOfLife::neighbor_life(vector<vector<int>> &board, int i, int j, int m, int n) {
    int ret = 0;
    if(i > 0 && j > 0) ret += board[i-1][j-1];
    if(i > 0) ret += board[i-1][j];
    if(i > 0 && j + 1 < n) ret += board[i-1][j+1];
    if(j > 0) ret += board[i][j-1];
    if(j + 1 < n) ret += board[i][j+1];
    if(i + 1 < m && j > 0) ret += board[i+1][j-1];
    if(i + 1 < m) ret += board[i+1][j];
    if(i + 1 < m && j + 1 < n) ret += board[i+1][j+1];
    return ret;
}

void GameOfLife::run() {
    vector<vector<int>> board = {{1}};
    vector<vector<int>> ret = {{0}};
    game_of_life(board);
    assert(board == ret);
}


