//
// Created by Qi Song on 09/03/2018.
//

#include "CombinationSum.h"

vector<vector<int>> CombinationSum::combination_sum(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ret;
    int sum = 0;
    for(int i = 0; i < candidates.size(); i++){
        vector<int> v;
        int x = candidates[i];
        sum = x;
        v.push_back(x);
        combination_sum(candidates, i, sum, target, v, ret);
    }
    return ret;
}

void CombinationSum::combination_sum(vector<int>& candidates, int idx, int sum, int target, vector<int>& out, vector<vector<int>> & ret) {
    if(sum > target) return;
    else if(sum == target) {
        ret.push_back(out);
    }
    else{
        for(int i = idx; i < candidates.size(); i++){
            int x = candidates[i];
            sum += x;
            out.push_back(x);
            combination_sum(candidates, i, sum, target, out, ret);
            sum -= x;
            out.pop_back();
        }
    }
}

void CombinationSum::run() {
    vector<int> nums = {2, 3, 6, 7};
    vector<vector<int>> ret = {{2,2,3}, {7}};
    assert(combination_sum(nums, 7) == ret);
}


