//
// Created by songkey on 2018/4/21.
//

#include "ThreeSumClosest.h"

int ThreeSumClosest::three_Sum_closest(vector<int> nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int m = INT_MAX;
    int ret = 0;
    for (int k = 0; k < n - 2; ++k) {
        int target2 = target - nums[k];
        int i = k + 1, j = n - 1;
        while(i < j){
            int t = nums[i] + nums[j];
            if(abs(target2 - t) < m){
                m = min(m, abs(target2 - t));
                ret = nums[k] + t;
            }
            if(t == target2) return target;
            else if(t > target2) j--;
            else i++;
        }
    }
    return ret;
}

void ThreeSumClosest::run() {
    vector<int> nums = {-1, 2, 1, -4};
    assert(three_Sum_closest(nums, 1) == 2);
}
