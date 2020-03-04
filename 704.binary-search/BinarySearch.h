//
// Created by songkey on 2020/2/29.
//

#ifndef LEETCODE_BINARYSEARCH_H
#define LEETCODE_BINARYSEARCH_H


#include "../Base.h"

class BinarySearch: public Base {
    int search(vector<int>& nums, int target);
    int search(vector<int>& nums, int l, int r, int target);
public:
    void run() override;

};


#endif //LEETCODE_BINARYSEARCH_H
