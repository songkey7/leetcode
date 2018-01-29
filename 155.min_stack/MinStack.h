//
// Created by Qi Song on 1/29/18.
//

#ifndef LEETCODE_MINSTACK_H
#define LEETCODE_MINSTACK_H


#include "../Base.h"

class MinStack: public Base {
    stack<int> st;
    stack<int> st2; // store the current min value
    void push(int x);
    void pop();
    int top();
    int get_min();

public:
    void run();
};


#endif //LEETCODE_MINSTACK_H
