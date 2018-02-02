//
// Created by Qi Song on 2/1/18.
//

#ifndef LEETCODE_COURSESCHEDULE_H
#define LEETCODE_COURSESCHEDULE_H


#include "../Base.h"

class CourseSchedule: public Base {
    bool can_finish(int numCourses, vector<pair<int, int>>& prerequisites);
    bool dfs(const vector<vector<int>> & dependency, int k, vector<int> &visit, int t);
public:
    void run();
};


#endif //LEETCODE_COURSESCHEDULE_H
