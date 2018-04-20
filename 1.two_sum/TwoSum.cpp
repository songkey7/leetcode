//
// Created by Qi Song on 1/8/18.
//

#include "TwoSum.h"

vector<int> TwoSum::two_sum(vector<int> &nums, int target) {
    unordered_map<int, int> num_map;
    // find and set hash map in same loop and find before set.
    for(int i = 0; i < nums.size(); i++){
        auto itr = num_map.find(nums[i]);
        if(itr != num_map.end()) return {itr->second, i};
        num_map[target - nums[i]] = i;
    }
    return {};
}

void TwoSum::run(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    vector<int> ret = two_sum(nums, target);
    for(auto x: ret){
        cout << x << " ";
    }
    cout << endl;
}

