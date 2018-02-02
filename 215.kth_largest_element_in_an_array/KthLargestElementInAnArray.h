//
// Created by Qi Song on 2/2/18.
//

#ifndef LEETCODE_KTHLARGESTELEMENTINANARRAY_H
#define LEETCODE_KTHLARGESTELEMENTINANARRAY_H


#include "../Base.h"

class KthLargestElementInAnArray: public Base {

    int find_Kth_largest(vector<int>& nums, int k);
    int find_Kth_largest_partition(vector<int>& nums, int k);
    int find_Kth_largest_priority_queue(vector<int>& nums, int k);
    int find_Kth_largest_heap_sort(vector<int> &nums, int k);
    int partition(vector<int>&nums, int l, int r);
    void heapify(vector<int> &nums, int i, int n);
    void build_heap(vector<int> &nums);
public:
    void run();
};


#endif //LEETCODE_KTHLARGESTELEMENTINANARRAY_H
