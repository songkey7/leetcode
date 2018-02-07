//
// Created by Qi Song on 2/7/18.
//

#include "MoveZeroes.h"

void MoveZeroes::move_zeroes(vector<int> &nums) {
    int b = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0) {
            swap(nums[i], nums[b]);
            b++;
        }
    }
}

void MoveZeroes::run() {
    vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> ret = {1, 3, 12, 0, 0};
    move_zeroes(nums);
    assert(nums == ret);
}
