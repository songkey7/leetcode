//
// Created by Qi Song on 2/7/18.
//

#ifndef LEETCODE_FINDTHEDUPLICATENUMBER_H
#define LEETCODE_FINDTHEDUPLICATENUMBER_H


#include "../Base.h"

class FindTheDuplicateNumber: public Base {
    int find_duplicate(vector<int>& nums);
    int find_duplicate2(vector<int>& nums);
public:
    void run();
};


#endif //LEETCODE_FINDTHEDUPLICATENUMBER_H
