//
// Created by Qi Song on 1/11/18.
//

#include "TopKFrequentElements.h"

vector<int> TopKFrequentElements::top_k_frequent2(vector<int> &nums, int k) {
    size_t n = nums.size();
    map<int, int> mp;
    for(auto x: nums) mp[x] ++;
    vector<vector<int>> tmp(n+1);
    vector<int> ret;
    for(auto x: mp){
        tmp[x.second].push_back(x.first);
    }
    for(size_t i = n; i > 0 && ret.size() < k; i--){
        for(auto x: tmp[i]){
            ret.push_back(x);
            if(ret.size() >= k){
                return ret;
            }
        }
    }
    return ret;
}


vector<int> TopKFrequentElements::top_k_frequent(vector<int> &nums, int k) {
    unordered_map<int, int> counter(nums.size());
    for(auto x: nums) {
        counter[x]++;
    }
    auto cmp = [](const pair<int, int> &a, const pair<int, int> &b){ return a.second < b.second;};
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)>q(cmp);
    for(auto x: counter) {
        q.push(x);
    }
    vector<int> ret;
    for(int i = 0; i < k && !q.empty(); i++) {
        ret.push_back(q.top().first);
        q.pop();
    }
    return ret;
}

void TopKFrequentElements::run() {
    vector<int> nums = {1};
    vector<int> ret = {1};
    assert(top_k_frequent(nums, 1) == ret);
    vector<int> nums1 = {1,1,1,2,2,3};
    vector<int> ret1 = {1,2};
    assert(top_k_frequent(nums1, 2) == ret1);
}
