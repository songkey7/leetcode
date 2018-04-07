//
// Created by Qi Song on 07/04/2018.
//

#include "CourseSchedule2.h"

vector<int> CourseSchedule2::find_order(int num_courses, vector<pair<int, int>> &prerequisites) {
    vector<vector<int>> pre(num_courses, vector<int>());
    for(auto c: prerequisites) pre[c.first].push_back(c.second);
    vector<bool> visit(num_courses, false);
    vector<int> ret;
    for(int i = 0; i < pre.size(); i++){
        vector<bool> visit2(num_courses, false);
        if(!dfs(pre, i, visit, visit2, ret)) return vector<int>();
    }
    return ret;
}

bool CourseSchedule2::dfs(vector<vector<int>> &pre, int c, vector<bool> &visit, vector<bool> &visit2, vector<int> &ret) {
    if(visit[c]) return true;
    if(visit2[c]) return false;
    visit2[c] = true;
    for(auto i: pre[c]){
        if(!dfs(pre, i, visit, visit2, ret)) return false;
    }
    visit[c] = true;
    ret.push_back(c);
    return true;
}

void CourseSchedule2::run() {
    //vector<pair<int, int>> prerequisites = {{1,0},{2,0},{3,1},{3,2}};
    //for(auto item: find_order(4, prerequisites)) cout << item << " ";
    vector<pair<int, int>> prerequisites = {{0,1},{0,2},{1,2}};
    for(auto item: find_order(3, prerequisites)) cout << item << " ";
}


