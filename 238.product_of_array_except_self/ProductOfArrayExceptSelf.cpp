//
// Created by Qi Song on 2/7/18.
//

#include "ProductOfArrayExceptSelf.h"

vector<int> ProductOfArrayExceptSelf::product_except_self(vector<int> &nums) {
    int s = 1;
    int cnt = 0;
    vector<int> ret = nums;
    for(auto x: nums){
        if(x) s *= x;
        else cnt ++;
    }
    for(int i = 0; i < ret.size(); i++){
        if(ret[i]) ret[i] = cnt > 0 ? 0 : s / ret[i];
        else ret[i] = cnt > 1 ? 0 : s;
    }
    return ret;
}

vector<int> ProductOfArrayExceptSelf::product_except_self2(vector<int> &nums) {
    size_t n = nums.size();
    vector<int> ret(n, 1);
    for(int i = 1; i < n; i++){
        ret[i] = ret[i - 1] * nums[i - 1];
    }
    int s = 1;
    for(int i = n - 1; i >= 0; i--){
        ret[i] *= s;
        s *= nums[i];
    }
    return ret;
}

void ProductOfArrayExceptSelf::run() {
    vector<int> nums = {1,2,3,4};
    vector<int> ret = {24,12,8,6};
    assert(product_except_self(nums) == ret);
    assert(product_except_self2(nums) == ret);
}


