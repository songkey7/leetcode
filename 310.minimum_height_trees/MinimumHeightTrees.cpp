//
// Created by Qi Song on 14/06/2018.
//

#include "MinimumHeightTrees.h"

vector<int> MinimumHeightTrees::find_min_height_trees(int n, vector<pair<int, int>> &edges) {
    if(n == 1) return {0};
    vector<vector<int>> graph(n);
    vector<int> cnt(n, 0);
    for(auto e: edges){
        cnt[e.first]++;
        cnt[e.second]++;
        graph[e.first].push_back(e.second);
        graph[e.second].push_back(e.first);
    }
    queue<int> q;
    for (int i = 0; i < n; ++i) {
        if(cnt[i] == 1) {
            q.push(i);
            cnt[i]--;
        }
    }
    vector<int> ret;
    while(!q.empty()){
        int n = q.size();
        ret.clear();
        while(n--){
            int t = q.front();
            q.pop();
            ret.push_back(t);
            for(auto i: graph[t]){
                if(--cnt[i] == 1) {
                    q.push(i);
                }
            }
        }
    }
    return ret;
}

void MinimumHeightTrees::run() {
    vector<pair<int, int>> edges = {{1,0}, {1,2}, {1,3}};
    vector<int> ret = {1};
    assert(find_min_height_trees(4, edges) == ret);

    vector<pair<int, int>> edges1 = {{0,3}, {1,3}, {2,3}, {4,3}, {5,4}};
    vector<int> ret1 = {3, 4};
    assert(find_min_height_trees(6, edges1) == ret1);
}


