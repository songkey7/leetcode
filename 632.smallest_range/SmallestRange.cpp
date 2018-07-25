//
// Created by Qi Song on 09/07/2018.
//

#include "SmallestRange.h"


vector<int> SmallestRange::smallest_range(vector<vector<int>> &nums) {
    int n = nums.size();
    vector<int> idxs(n, 0);
    int t_max = INT_MIN, t_min = INT_MAX;
    int ret_max = 100000, ret_min = -10000;
    priority_queue<vector<int>, vector<vector<int>>, decltype(&cmp)> q(cmp);
    for (int i = 0; i < n; ++i) {
        q.push({nums[i][0], i});
        t_max = max(t_max, nums[i][0]);
        t_min = min(t_min, nums[i][0]);
    }
    while(q.size() == n){
        vector<int> t = q.top();
        q.pop();
        t_min = t[0];
        int i = t[1];
        if(t_max - t_min < ret_max - ret_min){
            ret_min = t_min;
            ret_max = t_max;
        }
        if(++idxs[i] < nums[i].size()) {
            q.push({nums[i][idxs[i]], i});
            t_max = max(t_max, nums[i][idxs[i]]);
        }
    }
    return {ret_min, ret_max};
}

void SmallestRange::run() {
    vector<vector<int>> nums = {{4,10,15,24,26}, {0,9,12,20}, {5,18,22,30}};
    vector<int> ret = {20,24};
    assert(smallest_range(nums) == ret);
}
