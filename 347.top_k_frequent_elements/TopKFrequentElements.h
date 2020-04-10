//
// Created by Qi Song on 1/11/18.
//

#ifndef LEETCODE_TOPKFREQUENTELEMENTS_H
#define LEETCODE_TOPKFREQUENTELEMENTS_H


#include "../Base.h"

class TopKFrequentElements: public Base{
    vector<int> top_k_frequent(vector<int>& nums, int k);
    vector<int> top_k_frequent2(vector<int>& nums, int k);
public:
    void run();
};


#endif //LEETCODE_TOPKFREQUENTELEMENTS_H
