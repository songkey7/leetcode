//
// Created by Qi Song on 2/7/18.
//

#include "WordSearch.h"

bool WordSearch::exist(vector<vector<char>> &board, string word) {
    int sz = word.length();
    if(sz <= 0) return false;
    unordered_map<char, vector<pair<int, int>>> c_index;
    int m = board.size();
    int n = 0;
    for(int i = 0; i < m; i++){
        n = board[i].size();
        for(int j = 0; j < n; j++){
            c_index[board[i][j]].emplace_back(i, j);
        }
    }

    auto itr = c_index.find(word[0]);
    if(itr != c_index.end()){
        for(auto v: itr->second){
            if(search(board, c_index, word, 0, v.first, v.second, m, n)) return true;
        }
    }
    return false;
}

bool WordSearch::search(vector<vector<char>> &board, unordered_map<char, vector<pair<int, int>>> &c_index, string word, int idx, int i, int j, int m, int n){
    if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] == 0) return false;
    char c = word[idx];
    auto itr = c_index.find(c);
    if(itr != c_index.end()){
        for(auto p: itr->second){
            if(p.first == i && p.second == j){
                if(idx == word.size() - 1) return true;
                board[i][j] = 0;
                bool b = search(board, c_index, word, idx + 1, i - 1, j, m, n)
                      || search(board, c_index, word, idx + 1, i + 1, j, m, n)
                      || search(board, c_index, word, idx + 1, i, j - 1, m, n)
                      || search(board, c_index, word, idx + 1, i, j + 1, m, n);
                board[i][j] = c;
                return b;
            }
        }
    }
    return false;
}

void WordSearch::run() {
    vector<vector<char>> board = {{ 'A', 'B', 'C', 'E' },
                                  { 'S', 'F', 'C', 'S' },
                                  { 'A', 'D', 'E', 'E' }};
    assert(exist(board, "ABCCED"));
    assert(exist(board, "SEE"));
    assert(!exist(board, "ABCB"));
}
