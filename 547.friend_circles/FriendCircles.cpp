//
// Created by Qi Song on 1/9/18.
//

#include "FriendCircles.h"

void FriendCircles::DFS(int i, vector<vector<int>> &M, unordered_set<int> &visit){
    if(visit.find(i) != visit.end()) return;
    visit.insert(i);
    for(int j = 0; j < M[i].size(); j++){
        if(M[i][j] == 1) {
            DFS(j, M, visit);
        }
    }
}

int FriendCircles::findCircleNum(vector<vector<int>> &M) {
    unordered_set<int> visit;
    int ret = 0;
    for(int i = 0; i < M.size(); i++){
        if(visit.find(i) != visit.end()) continue;
        ret ++;
        DFS(i, M, visit);
    }
    return ret;
}

void FriendCircles::run() {
    vector<vector<int>> M = {{1,1,0},{1,1,0},{0,0,1}};
    assert(findCircleNum(M) == 2);

    vector<vector<int>> M1 = {{1,1,0},{1,1,1},{0,1,1}};
    assert(findCircleNum(M1) == 1);
}
