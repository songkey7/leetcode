//
// Created by Qi Song on 1/29/18.
//

#ifndef LEETCODE_IMPLEMENTSTACKUSINGQUEUES_H
#define LEETCODE_IMPLEMENTSTACKUSINGQUEUES_H


#include "../Base.h"

class ImplementStackUsingQueues: public Base {
    queue<int> q;
    void push(int x);
    int pop();
    int top();
    bool empty();

public:
    void run();
};


#endif //LEETCODE_IMPLEMENTSTACKUSINGQUEUES_H
