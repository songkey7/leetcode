//
// Created by Qi Song on 04/04/2018.
//

#ifndef LEETCODE_GASSTATION_H
#define LEETCODE_GASSTATION_H


#include "../Base.h"

class GasStation: public Base {
    int can_complete_circuit(vector<int>& gas, vector<int>& cost);
public:
    void run();
};


#endif //LEETCODE_GASSTATION_H
