//
// Created by Qi Song on 03/06/2018.
//

#include "JumpGame2.h"

int JumpGame2::jump(vector<int> nums) {
    size_t n = nums.size();
    if(n < 2) return 0;
    vector<int> ret;
    int i = 0;
    ret.push_back(nums[i++]);
    while(ret.back() < n - 1){
        int len = ret.back();
        ret.push_back(0);
        for(;i <= len && ret.back() < n - 1;i++){
            ret.back() = max(ret.back(), i + nums[i]);
        }
    }
    return ret.size();
}

void JumpGame2::run() {
    assert(jump({2,3,1,1,4}) == 2);
    assert(jump({1,1,1,1}) == 3);
}
