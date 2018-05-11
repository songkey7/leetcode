//
// Created by Qi Song on 2/7/18.
//

#include "WordSearch.h"

bool WordSearch::exist(vector<vector<char>> &board, string word) {
    int m = board.size();
    if(m == 0) return false;
    int n = board[0].size();
    unordered_map<char, vector<pair<int, int>>> c_map;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            c_map[board[i][j]].push_back({i, j});
        }
    }
    for(auto item: c_map[word[0]]){
        if(dfs(board, m, n, item.first, item.second, word, 0)) return true;
    }
    return false;
}
bool WordSearch::dfs(vector<vector<char>> &board, int m, int n, int i, int j, string word, int idx){
    if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] == 0 || idx >= word.size()) return false;
    bool b = false;
    if(board[i][j] == word[idx]) {
        if(idx == word.size() - 1) return true;
        char tmp = board[i][j];
        board[i][j] = 0;
        b = dfs(board, m, n, i - 1, j, word, idx + 1)
          || dfs(board, m, n, i + 1, j, word, idx + 1)
          || dfs(board, m, n, i, j - 1, word, idx + 1)
          || dfs(board, m, n, i, j + 1, word, idx + 1);
        board[i][j] = tmp;
    }
    return b;
}

void WordSearch::run() {
    vector<vector<char>> board = {{ 'A', 'B', 'C', 'E' },
                                  { 'S', 'F', 'C', 'S' },
                                  { 'A', 'D', 'E', 'E' }};
    assert(exist(board, "ABCCED"));
    assert(exist(board, "SEE"));
    assert(!exist(board, "ABCB"));
}
