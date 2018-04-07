//
// Created by Qi Song on 07/04/2018.
//

#ifndef LEETCODE_COURSESCHEDULE2_H
#define LEETCODE_COURSESCHEDULE2_H


#include "../Base.h"

class CourseSchedule2: public Base {
    vector<int> find_order(int num_courses, vector<pair<int, int>>& prerequisites);
public:
    void run();

    bool dfs(vector<vector<int>> &pre, int c, vector<bool> &visit, vector<bool> &visit2, vector<int> &ret);
};


#endif //LEETCODE_COURSESCHEDULE2_H
