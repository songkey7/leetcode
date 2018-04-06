//
// Created by Qi Song on 06/04/2018.
//

#include "RotateArray.h"

void RotateArray::rotate(vector<int> &nums, int k) {
    int n = nums.size();
    if(n == 0) return;
    k = k % n;
    if(k == 0) return;
    vector<int> tmp(nums.begin() + (n - k), nums.end());
    int i = n - 1;
    for(; i >= k; i--) nums[i] = nums[i - k];
    for(; i >= 0; i--) nums[i] = tmp[i];
}

void RotateArray::rotate2(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;
    if(k == 0) return;
    reverse(nums.begin(), nums.begin() + (n - k));
    reverse(nums.begin() + (n - k), nums.end());
    reverse(nums.begin(), nums.end());
}

void RotateArray::rotate3(vector<int> nums, int k) {
    int n = nums.size();
    k = k % n;
    if(k == 0) return;
    int m = n;
    for(int start = 0; start < m; start++){
        int tmp = nums[start];
        int i = start;
        for(int j = (i + n - k) % n; j != start;){
            m = min(m, j);
            nums[i] = nums[j];
            i = j;
            j = (i + n - k) % n;
        }
        nums[i] = tmp;
    }
}

void RotateArray::run() {
    vector<int> nums = {1,2,3,4,5,6};
    vector<int> ret = {3,4,5,6,1,2};
    rotate3(nums, 3);
    assert(nums == ret);
}


