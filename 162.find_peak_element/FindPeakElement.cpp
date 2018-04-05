//
// Created by Qi Song on 05/04/2018.
//

#include "FindPeakElement.h"

int FindPeakElement::find_peak_element(vector<int> &nums) {
    int n = nums.size();
    if(n < 2) return n - 1;
    if(nums[0] > nums[1]) return 0;
    nums.push_back(INT_MIN);
    for(int i = 1; i < n; i++){
        if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) return i;
    }
    return -1;
}

int FindPeakElement::find_peak_element2(vector<int> &nums) {
    int n = nums.size();
    if(n < 2) return n - 1;
    if(nums[0] > nums[1]) return 0;
    nums.push_back(INT_MIN);
    int i = 1, j = n;
    while(i<=j){
        int m = (i + j) / 2;
        if(nums[m] > nums[m - 1] && nums[m] > nums[m + 1]) return m;
        if(nums[m] > nums[m - 1]) i = m + 1;
        else j = m - 1;
    }
    return -1;
}

void FindPeakElement::run() {
    vector<int> nums = {1, 2, 3, 1};
    assert(find_peak_element(nums) == 2);
    assert(find_peak_element2(nums) == 2);
}


