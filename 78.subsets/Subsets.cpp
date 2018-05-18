//
// Created by Qi Song on 19/03/2018.
//

#include "Subsets.h"

vector<vector<int>> Subsets::subsets(vector<int> &nums) {
    vector<vector<int>> ret = {{}};
    for(auto x: nums){
        int l = ret.size();
        for(int i = 0; i < l; i++){
            vector<int> tmp = ret[i];
            tmp.push_back(x);
            ret.push_back(tmp);
        }
    }
    return ret;
}

void Subsets::dfs(vector<int> &nums, vector<int> v, int i, vector<vector<int>> & out) {
    for (; i < nums.size(); ++i) {
        v.push_back(nums[i]);
        out.push_back(v);
        dfs(nums, v, i + 1, out);
        v.pop_back();
    }
}

vector<vector<int>> Subsets::subsets2(vector<int> &nums) {
    vector<vector<int>> ret = {{}};
    dfs(nums, {}, 0, ret);
    return ret;
}

void Subsets::run() {
    vector<int> nums = {1,2,3};
    for(auto x: subsets(nums)) print_vector(x, x.size());
    for(auto x: subsets2(nums)) print_vector(x, x.size());
}


