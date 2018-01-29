//
// Created by Qi Song on 1/29/18.
//

#include "MinStack.h"

void MinStack::push(int x) {
    st.push(x);
    if(st2.empty() || x <= st2.top()) st2.push(x);
}

void MinStack::pop() {
    if(st.top() == st2.top()) st2.pop();
    st.pop();
}

int MinStack::top() {
    return st.top();
}

int MinStack::get_min() {
    return st2.top();
}

void MinStack::run() {
    MinStack * mst = new MinStack();
    mst->push(-2);
    mst->push(0);
    mst->push(-3);
    mst->push(-3);
    assert(mst->get_min() == -3);
    mst->pop();
    assert(mst->top() == -3);
    assert(mst->get_min() == -3);
}
