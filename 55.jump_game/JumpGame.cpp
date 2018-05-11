//
// Created by Qi Song on 2/8/18.
//

#include "JumpGame.h"

bool JumpGame::can_jump(vector<int> &nums) {
    int far = nums.size() - 1;
    for (int i = nums.size() - 2; i >= 0 ; --i) {
        if(nums[i] >= (far - i)) far = i;
    }
    return far == 0;
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
    assert(can_jump(nums1));
    vector<int> nums2 = {3,2,1,0,4};
    assert(!can_jump(nums2));
}


