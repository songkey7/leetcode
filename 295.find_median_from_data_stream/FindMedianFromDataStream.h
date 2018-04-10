//
// Created by Qi Song on 10/04/2018.
//

#ifndef LEETCODE_FINDMEDIANFROMDATASTREAM_H
#define LEETCODE_FINDMEDIANFROMDATASTREAM_H


#include "../Base.h"

class FindMedianFromDataStream: public Base {
    priority_queue<int, std::vector<int>, std::greater<int>> max_queue;
    priority_queue<int> min_queue;
    void add_num(int num);
    double find_median();
public:
    void run();
};


#endif //LEETCODE_FINDMEDIANFROMDATASTREAM_H
