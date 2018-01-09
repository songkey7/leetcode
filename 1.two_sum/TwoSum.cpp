//
// Created by Qi Song on 1/8/18.
//

#include "TwoSum.h"

vector<int> TwoSum::twoSum(vector<int>& nums, int target) {
    unsigned long n = nums.size();
    map<int, int> mp;
    for(int i = 0; i < n; ++i){
        auto iter = mp.find(nums[i]);
        if(iter != mp.end()){
            return {iter->second, i};
        }
        else{
            mp[target - nums[i]] = i;
        }
    }
}

void TwoSum::run(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    vector<int> ret = twoSum(nums, target);
    for(auto x: ret){
        cout << x << " ";
    }
    cout << endl;
}

