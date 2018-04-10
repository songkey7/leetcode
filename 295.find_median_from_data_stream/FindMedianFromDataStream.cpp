//
// Created by Qi Song on 10/04/2018.
//

#include "FindMedianFromDataStream.h"

void FindMedianFromDataStream::add_num(int num) {
    if(min_queue.empty()) {
        min_queue.push(num);
        return;
    }

    if(min_queue.size() == max_queue.size()){
        if(num <= max_queue.top())
            min_queue.push(num);
        else{
            min_queue.push(max_queue.top());
            max_queue.pop();
            max_queue.push(num);
        }
    }
    else{
        if(num >= min_queue.top())
            max_queue.push(num);
        else{
            max_queue.push(min_queue.top());
            min_queue.pop();
            min_queue.push(num);
        }
    }
}

double FindMedianFromDataStream::find_median() {
    return min_queue.size() == max_queue.size() ? double(max_queue.top() + min_queue.top()) / 2 : min_queue.top();
}

void FindMedianFromDataStream::run() {
    add_num(-1);
    assert(find_median() == -1);
    add_num(-2);
    assert(find_median() == -1.5);
    add_num(-3);
    assert(find_median() == -2);
    add_num(-4);
    assert(find_median() == -2.5);
    add_num(-5);
    assert(find_median() == -3);
}
