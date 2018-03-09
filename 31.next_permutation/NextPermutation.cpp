//
// Created by Qi Song on 09/03/2018.
//

#include "NextPermutation.h"

void NextPermutation::next_permutation(vector<int> &nums) {
    int n = nums.size();
    for(int i = n - 2; i >= 0; i--){
        int j = n - 1;
        while(j > i && nums[i] >= nums[j]) j--;
        if(i != j){
            swap(nums[i], nums[j]);
            for(j = 1; i + j < n - j; j++) swap(nums[i + j], nums[n - j]);
            return;
        }
        if(i == 0 && j == 0){
            for(j = 0; j < n - 1 - j; j++) swap(nums[j], nums[n - 1 - j]);
            return;
        }
    }
}

void NextPermutation::run() {
    vector<int> nums1 = {1,2,3};
    vector<int> ret1 = {1,3,2};
    next_permutation(nums1);
    assert(nums1 == ret1);

    vector<int> nums2 = {3,2,1};
    vector<int> ret2 = {1,2,3};
    next_permutation(nums2);
    assert(nums2 == ret2);

    vector<int> nums3 = {1,5,1};
    vector<int> ret3 = {5,1,1};
    next_permutation(nums3);
    assert(nums3 == ret3);
}
