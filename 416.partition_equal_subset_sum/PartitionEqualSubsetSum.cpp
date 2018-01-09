//
// Created by Qi Song on 1/9/18.
//

#include "PartitionEqualSubsetSum.h"

bool PartitionEqualSubsetSum::can_partition(vector<int> &nums) {
    unsigned int sum = 0;
    for(auto x: nums) sum += x;
    if(sum % 2 == 1) return false;

    unsigned int target = sum / 2;
    auto n = nums.size();
    vector<bool> dp(target + 1, false);
    dp[0] = true;
    for(int i = 0; i < n; i++){
        for(int j = target; j >= nums[i]; j--){
            dp[j] = dp[j] || dp[j - nums[i]];
        }
    }
    return dp[target];
}

void PartitionEqualSubsetSum::run() {
    vector<int> nums = {1, 2, 3, 5};
    assert(!can_partition(nums));
    vector<int> nums2 = {1, 5, 11, 5};
    assert(can_partition(nums2));
}
