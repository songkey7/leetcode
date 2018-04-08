//
// Created by Qi Song on 07/04/2018.
//

#include "WordSearch2.h"

vector<string> WordSearch2::find_words(vector<vector<char>> &board, vector<string> &words) {
    TrieNode * root = build_trie(words);
    vector<string> ret;
    int m = board.size();
    if(m == 0 || !root) return ret;
    int n = board[0].size();
    if(n == 0) return ret;

    string s;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            dfs(board, i, j, m, n, root, s, ret);
        }
    }
    return ret;
}

void WordSearch2::dfs(vector<vector<char>> &board, int i, int j, int m, int n, TrieNode *root, string &s, vector<string> &ret) {
    if(i < 0 || j < 0 || i >= m || j >= n || !root) return;
    if(board[i][j] == 0) return;

    int idx = board[i][j] - 'a';
    if(!root->_children[idx]) return;

    char tmp = board[i][j];
    board[i][j] = 0;
    s.push_back(tmp);

    root = root->_children[idx];
    if(root->_leaf){
        root->_leaf = false;
        ret.push_back(s);
    }
    dfs(board, i - 1, j, m, n, root, s, ret);
    dfs(board, i + 1, j, m, n, root, s, ret);
    dfs(board, i, j - 1, m, n, root, s, ret);
    dfs(board, i, j + 1, m, n, root, s, ret);
    board[i][j] = tmp;
    s.pop_back();

}

WordSearch2::TrieNode *WordSearch2::build_trie(vector<string> &words) {
    if(words.size() == 0) return nullptr;
    TrieNode * root = new TrieNode(-1);
    unordered_set<string> words_set(words.begin(), words.end());
    for(auto word: words_set){
        TrieNode * p = root;
        for(int i = 0; i < word.size(); i++){
            int idx = word[i] - 'a';
            if(!p->_children[idx]) {
                p->_children[idx] = new TrieNode(word[i]);
            }
            p = p->_children[idx];
            if(i == word.size() - 1) p->_leaf = true;
        }
    }
    return root;
}

void WordSearch2::run() {
    vector<string> words = {"oath","pea","eat","rain"};
    vector<vector<char>> board = {
                                  {'o','a','a','n'},
                                  {'e','t','a','e'},
                                  {'i','h','k','r'},
                                  {'i','f','l','v'}
                                 };
    vector<string> ret = {"oath", "eat"};
    assert(find_words(board, words) == ret);
}


