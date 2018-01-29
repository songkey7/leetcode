//
// Created by Qi Song on 1/29/18.
//

#ifndef LEETCODE_IMPLEMENTQUEUEUSINGSTACKS_H
#define LEETCODE_IMPLEMENTQUEUEUSINGSTACKS_H


#include "../Base.h"

class ImplementQueueUsingStacks: public Base {
    stack<int> st;
    void push(int x);
    int pop();
    int front();
    bool empty();
    void push_helper(int x);

public:
    void run();
};


#endif //LEETCODE_IMPLEMENTQUEUEUSINGSTACKS_H
