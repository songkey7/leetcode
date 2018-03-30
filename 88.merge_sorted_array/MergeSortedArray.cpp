//
// Created by Qi Song on 30/03/2018.
//

#include "MergeSortedArray.h"

void MergeSortedArray::merge(vector<int> nums1, int m, vector<int> nums2, int n) {
    if(n == 0) return;
    if(m == 0) {
        nums1 = nums2;
        return;
    }

    nums1.resize(m + n);
    while(m > 0 && n > 0 && m + n > 0){
        if(nums1[m-1] > nums2[n-1]){
            nums1[m + n - 1] = nums1[m-1];
            m--;
        } else{
            nums1[m + n - 1] = nums2[n-1];
            n--;
        }
    }
    while(--n >= 0){
        nums1[n] = nums2[n];
    }
}

void MergeSortedArray::run() {
    vector<int> nums1 = {2,0};
    vector<int> nums2 = {1};
    vector<int> ret = {1,2};
    merge(nums1, 1, nums2, 1);
    assert(nums1 == ret);
}
