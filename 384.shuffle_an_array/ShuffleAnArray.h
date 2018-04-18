//
// Created by Qi Song on 18/04/2018.
//

#ifndef LEETCODE_SHUFFLEANARRAY_H
#define LEETCODE_SHUFFLEANARRAY_H


#include "../Base.h"

class ShuffleAnArray: public Base {
    vector<int> _vec;
    vector<int>  reset();
    vector<int>  shuffle();
    vector<int>  shuffle2();
public:
    void run();
};


#endif //LEETCODE_SHUFFLEANARRAY_H
