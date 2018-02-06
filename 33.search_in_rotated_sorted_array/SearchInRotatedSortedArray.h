//
// Created by Qi Song on 2/6/18.
//

#ifndef LEETCODE_SEARCHINROTATEDSORTEDARRAY_H
#define LEETCODE_SEARCHINROTATEDSORTEDARRAY_H


#include "../Base.h"

class SearchInRotatedSortedArray: public Base {
    int search(vector<int>& nums, int target);
    int search2(vector<int>& nums, int target);
    int bi_search(vector<int> &nums, int l, int r, int target);
public:
    void run();
};


#endif //LEETCODE_SEARCHINROTATEDSORTEDARRAY_H
