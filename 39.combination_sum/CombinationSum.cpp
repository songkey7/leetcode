//
// Created by Qi Song on 09/03/2018.
//

#include "CombinationSum.h"

vector<vector<int>> CombinationSum::combination_sum(vector<int> &candidates, int target) {
    vector<vector<int>> ret;
    sort(candidates.begin(), candidates.end());
    dfs(candidates, 0, {}, target, ret);
    return ret;
}

void CombinationSum::dfs(vector<int> candidates, int i, vector<int> out, int target, vector<vector<int>> &ret){
    for(; i < candidates.size() && candidates[i] <= target; i++){
        if(candidates[i] == target){
            out.push_back(target);
            ret.push_back(out);
            return;
        }
        out.push_back(candidates[i]);
        dfs(candidates, i, out, target - candidates[i], ret);
        out.pop_back();
    }
}

void CombinationSum::run() {
    vector<int> nums = {2, 3, 6, 7};
    vector<vector<int>> ret = {{2,2,3}, {7}};
    assert(combination_sum(nums, 7) == ret);
}


