//
// Created by songkey on 2018/4/21.
//

#include "ThreeSumClosest.h"

int ThreeSumClosest::three_Sum_closest(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int m = INT_MAX;
    int ret = 0;
    for(int i = 0; i < n - 2; i++){
        int target2 = target - nums[i];
        int ii = i + 1, jj = n - 1;
        while(ii < jj){
            int tmp = nums[ii] + nums[jj];
            int t = abs(target2 - tmp);
            if(t == 0) return target;
            if(t < m){
                m = t;
                ret = tmp + nums[i];
            }
            if(tmp > target2) jj--;
            else ii++;
        }
    }
    return ret;
}

void ThreeSumClosest::run() {
    vector<int> nums = {-1, 2, 1, -4};
    assert(three_Sum_closest(nums, 1) == 2);
}
