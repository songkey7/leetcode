//
// Created by Qi Song on 2/8/18.
//

#include "JumpGame.h"

bool JumpGame::can_jump(vector<int> &nums) {
    int n = nums.size();
    vector<bool> flag(n, false);
    flag[n-1] = true;
    for(int i = n-2; i >= 0; i--){
        for(int j = n-1; j>i; j--){
            if(flag[j] && j - i <= nums[i]){
                flag[i] = true;
                break;
            }
        }
    }
    return flag[0];
}

bool JumpGame::can_jump2(vector<int> &nums) {
    int n = nums.size();
    int reach = 0;
    for(int i = 0; i < n && i <= reach; i++){
        reach = max(i+nums[i], reach);
    }
    return reach >= n - 1;
}

void JumpGame::run() {
    vector<int> nums1 = {2,3,1,1,4};
    assert(can_jump2(nums1));
    vector<int> nums2 = {3,2,1,0,4};
    assert(!can_jump2(nums2));
}


