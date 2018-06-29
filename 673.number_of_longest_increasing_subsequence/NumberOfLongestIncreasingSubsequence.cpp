//
// Created by Qi Song on 29/06/2018.
//

#include "NumberOfLongestIncreasingSubsequence.h"

int NumberOfLongestIncreasingSubsequence::find_number_of_LIS(vector<int> nums) {
    int n = nums.size();
    if(n < 2) return n;
    int ret = 0;
    int m = 0;
    vector<int> l(n, 1);
    vector<int> c(n, 1);
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if(nums[j] < nums[i]){
                if(l[j] + 1 > l[i]) {
                    l[i] = l[j] + 1;
                    c[i] = c[j];
                }
                else if(l[j] + 1 == l[i])
                    c[i] += c[j];
            }
        }
        m = max(m, l[i]);
    }
    for (int i = 0; i < n; ++i) {
        if(m == l[i]) ret += c[i];
    }
    return ret;
}

void NumberOfLongestIncreasingSubsequence::run() {
    assert(find_number_of_LIS({1,2,4,3,5,4,7,2}) == 3);
    assert(find_number_of_LIS({1,3,5,4,7}) == 2);
    assert(find_number_of_LIS({2,2,2,2,2}) == 5);
}
