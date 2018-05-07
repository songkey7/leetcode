//
// Created by Qi Song on 07/05/2018.
//

#include "CombinationSum2.h"

vector<vector<int>> CombinationSum2::combination_sum_2(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ret;
    dfs(candidates, 0, {}, target, ret);
    return ret;
}

void CombinationSum2::dfs(vector<int> &candidates, int i, vector<int> out, int target, vector<vector<int>> &ret) {
    for(; i < candidates.size() && candidates[i] <= target; i++){
        out.push_back(candidates[i]);
        if(candidates[i] == target){
            ret.push_back(out);
            return;
        }
        dfs(candidates, i + 1, out, target - candidates[i], ret);
        out.pop_back();
        while(candidates[i] == candidates[i+1]) i++;
    }
}

void CombinationSum2::run() {
    vector<int> candidates = {2,5,2,1,2};
    vector<vector<int>> ret = {{1,2,2},{5}};
    assert(combination_sum_2(candidates, 5) == ret);

    vector<int> candidates2 = {10,1,2,7,6,1,5};
    vector<vector<int>> ret2 = {{1,1,6},{1,2,5},{1,7},{2,6}};
    assert(combination_sum_2(candidates2, 8) == ret2);
}


