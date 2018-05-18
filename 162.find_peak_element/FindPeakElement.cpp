//
// Created by Qi Song on 05/04/2018.
//

#include "FindPeakElement.h"

int FindPeakElement::find_peak_element(vector<int> &nums) {
    nums.push_back(INT_MIN);
    if(nums[0] > nums[1]) return 0;
    int i = 0, j = nums.size() - 1;
    while(i < j){
        int m = (i + j) / 2;
        if(nums[m] > nums[m - 1] && nums[m] > nums[m + 1]) return m;
        if(nums[m] > nums[m - 1]) i = m + 1;
        else j = m - 1;
    }
}

void FindPeakElement::run() {
    vector<int> nums = {1, 2, 3, 1};
    assert(find_peak_element(nums) == 2);
}


