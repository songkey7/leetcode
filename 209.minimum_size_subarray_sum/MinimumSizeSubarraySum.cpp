//
// Created by Qi Song on 11/06/2018.
//

#include "MinimumSizeSubarraySum.h"

int MinimumSizeSubarraySum::min_sub_array_len(int s, vector<int> &nums) {
    int sum = 0;
    int ret = INT_MAX;
    int n = nums.size();
    int i = 0, j = 0;
    while(j < n && sum < s) {
        sum += nums[j++];
        while(i <= j && sum >= s) {
            ret = min(ret, j - i);
            sum -= nums[i++];
        }
    }
    return ret == INT_MAX ? 0 : ret;
}

void MinimumSizeSubarraySum::run() {
    vector<int> nums = {2,3,1,2,4,3};
    assert(min_sub_array_len(7, nums) == 2);
}
