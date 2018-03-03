//
// Created by user on 02/03/2018.
//

#ifndef LEETCODE_SLIDINGWINDOWMAXIMUM_H
#define LEETCODE_SLIDINGWINDOWMAXIMUM_H


#include "../Base.h"

class SlidingWindowMaximum: public Base{
    vector<int> max_sliding_window(vector<int>& nums, int k);
    vector<int> max_sliding_window2(vector<int>& nums, int k);
    bool check_heap(vector<pair<int,int>> &heap);
public:
    void run();

};


#endif //LEETCODE_SLIDINGWINDOWMAXIMUM_H
