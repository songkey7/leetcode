//
// Created by songkey on 2020/2/28.
//

#ifndef LEETCODE_KTHLARGESTELEMENTINASTREAM_H
#define LEETCODE_KTHLARGESTELEMENTINASTREAM_H


#include "../Base.h"

class KthLargestElementInAStream: public Base{
    bool init(int k, vector<int>& nums);
    int add(int val);
    priority_queue<int, vector<int>, greater<>> pq;
    int K;
public:
    void run() override ;
};


#endif //LEETCODE_KTHLARGESTELEMENTINASTREAM_H
