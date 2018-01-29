//
// Created by Qi Song on 1/29/18.
//

#include "ImplementStackUsingQueues.h"

void ImplementStackUsingQueues::push(int x) {
    q.push(x);
    for(int i = 0; i < q.size() - 1; i++){
        q.push(q.front());
        q.pop();
    }
}

int ImplementStackUsingQueues::pop() {
    int ret = q.front();
    q.pop();
    return ret;
}

int ImplementStackUsingQueues::top() {
    return q.front();
}

bool ImplementStackUsingQueues::empty() {
    return q.empty();
}

void ImplementStackUsingQueues::run() {
    ImplementStackUsingQueues * st = new ImplementStackUsingQueues();
    st->push(1);
    st->push(2);
    st->push(3);
    assert(st->top() == 3);
    st->pop();
    assert(st->top() == 2);
    st->push(4);
    assert(st->top() == 4);
    st->pop();
    st->pop();
    st->pop();
    assert(st->empty());
}
