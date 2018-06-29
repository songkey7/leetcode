//
// Created by Qi Song on 25/06/2018.
//

#include "Permutations2.h"

vector<vector<int>> Permutations2::permute_unique(vector<int> &nums) {
    vector<vector<int>> ret;
    size_t n = nums.size();
    vector<bool> visit(n, false);
    sort(nums.begin(), nums.end());
    dfs(nums, n, 0, visit, {}, ret);
    return ret;
}

void Permutations2::dfs(vector<int> &nums, int n, int len, vector<bool> &visit, vector<int> out, vector<vector<int>> &ret) {
    if(len == n){
        ret.push_back(out);
        return;
    }
    for (int i = 0; i < n; ++i) {
        if(!visit[i]) {
            visit[i] = true;
            out.push_back(nums[i]);
            dfs(nums, n, len + 1, visit, out, ret);
            out.pop_back();
            visit[i] = false;
            for (int j = i + 1; j < n && nums[i] == nums[j]; ++j) i++;
        }
    }
}

void Permutations2::run() {
    vector<int> nums = {1,1,2};
    vector<vector<int>> ret = {{1,1,2}, {1,2,1}, {2,1,1}};
    assert(permute_unique(nums) == ret);
}


