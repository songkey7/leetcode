//
// Created by user on 06/03/2018.
//

#ifndef LEETCODE_MEDIANOFTWOSORTEDARRAYS_H
#define LEETCODE_MEDIANOFTWOSORTEDARRAYS_H


#include "../Base.h"

class MedianOfTwoSortedArrays: public Base {
    double find_median_sorted_arrays(vector<int>& nums1, vector<int>& nums2);
    int find_Kth(vector<int> &nums1, int i, vector<int> &nums2, int r, int k);
public:
    void run();
};


#endif //LEETCODE_MEDIANOFTWOSORTEDARRAYS_H
