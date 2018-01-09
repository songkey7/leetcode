//
// Created by Qi Song on 1/9/18.
//

#ifndef LEETCODE_TASKSCHEDULER_H
#define LEETCODE_TASKSCHEDULER_H


#include "../Base.h"

class TaskScheduler: public Base{
    int run();
    int least_interval(vector<char>& tasks, int n);
    int least_interval2(vector<char>& tasks, int n);
};


#endif //LEETCODE_TASKSCHEDULER_H
