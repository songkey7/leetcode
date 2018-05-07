//
// Created by Qi Song on 09/03/2018.
//

#include "NextPermutation.h"

void NextPermutation::next_permutation(vector<int> &nums) {
    int n = nums.size();
    for (int i = n - 2; i >= 0 ; --i) {
        int j = n - 1;
        while(j > i && nums[j] <= nums[i]) j--;
        if(j != i){
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
            return;
        }
    }
    reverse(nums.begin(), nums.end());
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
