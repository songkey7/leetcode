//
// Created by Qi Song on 10/04/2018.
//

#include "MissingNumber.h"

int MissingNumber::missing_number(vector<int> nums) {
    long sum = 0;
    long n = nums.size();
    for(auto i: nums){
        sum += i;
    }
    return n * (n + 1) / 2 - sum;
}

int MissingNumber::missing_number2(vector<int> nums) {
    int ret = nums.size();
    for(int i = 0; i < nums.size(); i++){
        ret = ret ^ i ^ nums[i];
    }
    return ret;
}

void MissingNumber::run() {
    //vector<int> nums1 = {9,6,4,2,3,5,7,0,1};
    //assert(missing_number(nums1) == 8);
    vector<int> nums2 = {3,0,1};
    assert(missing_number2(nums2) == 2);
}


