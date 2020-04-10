//
// Created by Qi Song on 08/03/2018.
//

#include "ThreeSum.h"

vector<vector<int>> ThreeSum::three_sum(vector<int> nums) {
    int n = static_cast<int>(nums.size());
    sort(nums.begin(), nums.end());
    vector<vector<int>> ret;
    for (int k = 0; k < n - 2; ++k) {
        if(k > 0 && nums[k] == nums[k - 1]) continue;
        int target = 0 - nums[k];
        if(nums[k + 1] + nums[k + 2] > target) break;
        if(nums[n - 1] + nums[n - 2] < target) continue;
        int i = k + 1, j = n - 1;
        while(i < j){
            if(nums[i] + nums[j] == target){
                ret.push_back({nums[k], nums[i++], nums[j--]});
                while(i < j && nums[i] == nums[i - 1]) i++;
                while(i < j && nums[j] == nums[j + 1]) j--;
            } else if(nums[i] + nums[j] < target){
                i++;
                while(i < j && nums[i] == nums[i - 1]) i++;
            } else{
                j--;
                while(i < j && nums[j] == nums[j + 1]) j--;
            }
        }
    }
    return ret;
}

void ThreeSum::run() {
    vector<int> nums = {0,0,0,0};
    vector<vector<int>> ret = {{0,0,0}};
    assert(three_sum(nums) == ret);
    vector<int> nums2 = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ret2 = {{-1, -1, 2,}, {-1, 0, 1}};
    assert(three_sum(nums2) == ret2);
}
