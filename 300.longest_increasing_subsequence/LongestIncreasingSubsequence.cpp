//
// Created by Qi Song on 3/1/18.
//

#include "LongestIncreasingSubsequence.h"

int LongestIncreasingSubsequence::length_of_LIS(vector<int> &nums) {
    int n = nums.size();
    if(n == 0) return 0;
    vector<int> dp(n, 1);
    int ret = 1;
    for(int i = 1; i < n; i++){
        for(int j = i - 1; j >= 0; j--){
            if(nums[i] > nums[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ret = max(ret, dp[i]);
    }
    return ret;
}

int LongestIncreasingSubsequence::length_of_LIS2(vector<int> &nums) {
    int n = nums.size();
    if(n == 0) return 0;
    vector<int> ret;
    for(auto x: nums){
        int l = 0, r = ret.size();
        while(l < r){
            int m = (l + r) / 2;
            if(ret[m] < x){
                l = m + 1;
            }
            else{
                r = m;
            }
        }
        if(l == ret.size()) ret.push_back(x);
        else ret[l] = x;
    }
    return ret.size();
}

void LongestIncreasingSubsequence::run() {
//    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
//    assert(length_of_LIS(nums) == 4);
    vector<int> nums = {1,3,6,7,9,4,10,5,6};
    assert(length_of_LIS2(nums) == 6);
}


