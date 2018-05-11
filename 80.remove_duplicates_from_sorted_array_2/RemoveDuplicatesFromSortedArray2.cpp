//
// Created by Qi Song on 11/05/2018.
//

#include "RemoveDuplicatesFromSortedArray2.h"

int RemoveDuplicatesFromSortedArray2::remove_duplicates(vector<int> &nums) {
    int n = nums.size();
    if(n == 0) return 0;
    int idx = 1;
    for (int i = 1, cnt = 1; i < n; ++i, cnt++) {
        cnt = nums[i - 1] != nums[i] ? 0 : cnt;
        if(cnt < 2) nums[idx++] = nums[i];
    }
    return idx;
}

void RemoveDuplicatesFromSortedArray2::run() {
    vector<int> nums1 = {1,1,1,2,2,3};
    print_vector(nums1, remove_duplicates(nums1));
    vector<int> nums2 = {0,0,1,1,1,1,2,3,3};
    print_vector(nums2, remove_duplicates(nums2));
}
