//
// Created by Qi Song on 2/1/18.
//

#include "CourseSchedule.h"

bool CourseSchedule::can_finish(int numCourses, vector<pair<int, int>> &prerequisites) {
    vector<vector<int>> dependency(numCourses, vector<int>());
    for(auto p: prerequisites){
        dependency[p.second].push_back(p.first);
    }
    for(int i = 0; i < numCourses; i++){
        vector<int> visit(numCourses, false);
        for(auto v: dependency[i]){
            if(!dfs(dependency, v, visit, i)) return false;
        }
    }
    return true;
}

bool CourseSchedule::dfs(const vector<vector<int>> & dependency, int k, vector<int> &visit, int t) {
    if(!visit[k]){
        visit[k] = true;
        if(k == t) return false;
        for(auto v: dependency[k]){
            if(!dfs(dependency, v, visit, t)) return false;
        }
    }
    return true;
}

void CourseSchedule::run() {
    vector<pair<int, int>> v1 = {{1,0}};
    assert(can_finish(2,v1));
    vector<pair<int, int>> v2 = {{1,0}, {0,1}};
    assert(!can_finish(2,v2));
    vector<pair<int, int>> v3 = {{0,1},{3,1},{1,3},{3,2}};
    assert(!can_finish(4,v3));
    vector<pair<int, int>> v4 = {{0,1},{0,2},{1,2}};
    assert(can_finish(3,v4));
}
