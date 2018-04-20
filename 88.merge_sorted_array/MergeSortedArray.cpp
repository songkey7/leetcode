//
// Created by Qi Song on 30/03/2018.
//

#include "MergeSortedArray.h"

void MergeSortedArray::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    nums1.resize(m + n);
    int i = m - 1, j = n - 1, k = n + m - 1;
    while(i >= 0 && j >= 0){
        if(nums1[i] >= nums2[j]) nums1[k--] = nums1[i--];
        else nums1[k--] = nums2[j--];
    }
    while(i >= 0) nums1[k--] = nums1[i--];
    while(j >= 0) nums1[k--] = nums2[j--];
}

void MergeSortedArray::run() {
    vector<int> nums1 = {2,0};
    vector<int> nums2 = {1};
    vector<int> ret = {1,2};
    merge(nums1, 1, nums2, 1);
    assert(nums1 == ret);
}
