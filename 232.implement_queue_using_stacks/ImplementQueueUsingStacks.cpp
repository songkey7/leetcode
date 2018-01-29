//
// Created by Qi Song on 1/29/18.
//

#include "ImplementQueueUsingStacks.h"

void ImplementQueueUsingStacks::push(int x) {
    push_helper(x);
}

void ImplementQueueUsingStacks::push_helper(int x) {
    if(st.empty()){
        st.push(x);
        return;
    }
    int d = st.top();
    st.pop();
    push_helper(x);
    st.push(d);
}

int ImplementQueueUsingStacks::pop() {
    int ret = st.top();
    st.pop();
    return ret;
}

int ImplementQueueUsingStacks::front() {
    return st.top();
}

bool ImplementQueueUsingStacks::empty() {
    return st.empty();
}

void ImplementQueueUsingStacks::run() {
    ImplementQueueUsingStacks * q = new ImplementQueueUsingStacks();
    q->push(1);
    q->push(2);
    q->push(3);
    assert(q->pop() == 1);
    assert(q->pop() == 2);
    assert(q->pop() == 3);
}
