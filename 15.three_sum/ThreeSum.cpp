//
// Created by Qi Song on 08/03/2018.
//

#include "ThreeSum.h"

vector<vector<int>> ThreeSum::three_sum(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> ret;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n - 2; i++){
        if(i == 0 || nums[i] != nums[i - 1]) {
            find_target(nums, i + 1, -nums[i], ret);
        }
    }
    return ret;
}

void ThreeSum::find_target(vector<int> nums, int i, int target, vector<vector<int>> &out) {
    int n = nums.size();
    int j = n - 1;
    while(i < j){
        int sum = nums[i] + nums[j];
        if(sum == target){
            out.push_back({-target, nums[i], nums[j]});
            while(i < j && nums[i+1] == nums[i++]);
            while(i < j && nums[j-1] == nums[j--]);
        }
        else if(sum > target){
            while(i < j && nums[j-1] == nums[j--]);
        }
        else{
            while(i < j && nums[i+1] == nums[i++]);
        }
    }
}

void ThreeSum::run() {
    vector<int> nums = {0,0,0,0};
    vector<vector<int>> ret = {{0,0,0}};
    assert(three_sum(nums) == ret);
    vector<int> nums2 = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ret2 = {{-1, -1, 2,}, {-1, 0, 1}};
    assert(three_sum(nums2) == ret2);
}


