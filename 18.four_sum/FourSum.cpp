//
// Created by songkey on 2018/4/21.
//

#include "FourSum.h"

vector<vector<int>> FourSum::four_sum(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ret;
    int n = nums.size();
    for (int i = 0; i < n - 3; ++i) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        if(nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
        if(nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target) continue;
        for (int j = i + 1; j < n - 2; ++j) {
            if(j > i + 1 && nums[j] == nums[j - 1]) continue;
            if(nums[i] + nums[j] + nums[j + 1] + nums[i + 2] > target) break;
            if(nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target) continue;
            int tmp = target - nums[i] - nums[j];
            int l = j + 1, r = n - 1;
            while(l < r){
                if(nums[l] + nums[r] == tmp){
                    ret.push_back({nums[i], nums[j], nums[l++], nums[r--]});
                    while(l < r && nums[l] == nums[l-1])l++;
                    while(l < r && nums[r] == nums[r+1])r--;
                }
                else if (nums[l] + nums[r] > tmp) {
                    r--;
                    while(l < r && nums[r] == nums[r+1]) r--;
                }
                else {
                    l++;
                    while(l < r && nums[l] == nums[l-1]) l++;
                }
            }
        }
    }
    return ret;
}

void FourSum::run() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    vector<vector<int>> ret = {
            {-1,  0, 0, 1},
            {-2, -1, 1, 2},
            {-2,  0, 0, 2}
    };
    four_sum(nums, 0);
}
