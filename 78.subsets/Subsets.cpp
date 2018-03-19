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

void Subsets::dfs(vector<int> &nums, vector<int> ret, int idx, bool flag, vector<vector<int>> & out) {
    if(flag){
        ret.push_back(nums[idx]);
    }
    if(idx == nums.size() - 1){
        out.push_back(ret);
        return;
    }
    dfs(nums, ret, idx + 1, true, out);
    dfs(nums, ret, idx + 1, false, out);
}

vector<vector<int>> Subsets::subsets2(vector<int> &nums) {
    if(nums.empty()) return vector<vector<int>>();
    vector<vector<int>> ret;
    dfs(nums, vector<int>(), 0, true, ret);
    dfs(nums, vector<int>(), 0, false, ret);
    return ret;
}

void Subsets::print(vector<vector<int>> ret) {
    for(auto v: ret){
        for(auto x: v){
            cout << x << ",";
        }
        cout << endl;
    }
}

void Subsets::run() {
    vector<int> nums = {1,2,3};
    vector<vector<int>> ret = subsets2(nums);
    print(ret);
}


