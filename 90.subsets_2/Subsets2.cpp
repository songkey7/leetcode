//
// Created by Qi Song on 14/05/2018.
//

#include "Subsets2.h"

vector<vector<int>> Subsets2::subsets_with_dup(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    deque<vector<int>> q = {{}};
    for (int i = 0, cnt = 0; i < nums.size(); ++i) {
        if(i > 0 && nums[i] != nums[i - 1]) cnt = 0;
        cnt++;
        int n = q.size();
        for (int j = 0; j < n; ++j) {
            vector<int> tmp = q[j];
            int t = cnt - 1;
            for (int k = tmp.size() - 1; k >= 0 && tmp[k] == nums[i]; --k) t--;
            if(t == 0){
                tmp.push_back(nums[i]);
                q.push_back(tmp);
            }
        }
    }
    return vector<vector<int>> (q.begin(), q.end());
}

vector<vector<int>> Subsets2::subsets_with_dup2(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ret = {{}};
    dfs(nums, 0, {}, ret);
    return ret;
}

void Subsets2::dfs(vector<int> &nums, int idx, vector<int> v, vector<vector<int>> &ret) {
    while(idx < nums.size()){
        v.push_back(nums[idx]);
        ret.push_back(v);
        dfs(nums, idx + 1, v, ret);
        v.pop_back();
        int i = idx + 1;
        for (; i < nums.size() && nums[i] == nums[idx]; ++i);
        idx = i;
    }
}

void Subsets2::run() {
    vector<int> nums = {1,2,2};
    for(auto x: subsets_with_dup2(nums)) print_vector(x, x.size());
}


