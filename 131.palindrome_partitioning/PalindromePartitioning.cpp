//
// Created by Qi Song on 04/04/2018.
//

#include "PalindromePartitioning.h"

vector<vector<string>> PalindromePartitioning::partition(string s) {
    size_t n = s.length();
    unordered_map<int, vector<int>> graph;
    for(int i = 0; i < n; i++){
        for(int j = 0; i - j >= 0 && i + j < n && s[i - j] == s[i + j]; j++){
            graph[i-j].push_back(i+j);
        }
        for(int j = 0; i - j >= 0 && i + j + 1 < n && s[i - j] == s[i + j + 1]; j++){
            graph[i-j].push_back(i+j+1);
        }
    }
    for(auto x: graph){
        cout << x.first << " : ";
        for(auto xx: x.second)
            cout << xx << " ";
        cout << endl;
    }
    vector<vector<string>> ret;
    vector<string> vec;
    dfs(s, graph, 0, vec, ret);
    return ret;
}

void PalindromePartitioning::dfs(string s, unordered_map<int, vector<int>> &graph, int i, vector<string> &vec, vector<vector<string>> &out) {
    size_t n = s.length();
    if(i == n) return;
    if(graph.find(i) != graph.end()){
        for(auto j: graph[i]){
            vec.push_back(s.substr(i, j - i + 1));
            if(j == n-1){
                out.push_back(vec);
            } else{
                dfs(s, graph, j + 1, vec, out);
            }
            vec.pop_back();
        }
    }
}

void PalindromePartitioning::run() {
    vector<vector<string>> ret = {{"aa","b"}, {"a","a","b"}};
    partition("aab");
}


