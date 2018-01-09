//
// Created by Qi Song on 1/9/18.
//

#include "SubarraySumEqualsK.h"

int SubarraySumEqualsK::subarray_sum(vector<int> &nums, int k) {
    unordered_map<int, int> mp;
    mp[k] = 1;
    int sum = 0;
    int ret = 0;
    for(auto x: nums){
        sum += x;
        if(mp.find(sum) != mp.end()){
           ret += mp[sum];
        }
        mp[k+sum]++;
    }
    return ret;
}

void SubarraySumEqualsK::run() {
    vector<int> arr = {1,1,1};
    int k = 2;
    assert(subarray_sum(arr, k) == 2);
}
