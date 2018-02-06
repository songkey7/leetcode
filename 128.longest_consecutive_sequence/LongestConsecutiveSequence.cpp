//
// Created by Qi Song on 2/6/18.
//

#include "LongestConsecutiveSequence.h"

int LongestConsecutiveSequence::longest_consecutive(vector<int> &nums) {
    unordered_map<int, int> cnt_map;
    int ret = 0;
    for(auto x: nums){
        auto itr_l = cnt_map.find(x - 1);
        auto itr_r = cnt_map.find(x + 1);
        auto itr_x = cnt_map.find(x);
        if(itr_x == cnt_map.end()){
            int l = itr_l != cnt_map.end() ? itr_l->second : 0;
            int r = itr_r != cnt_map.end() ? itr_r->second : 0;
            int cnt = 1 + l + r;
            ret = max(ret, cnt);
            cnt_map[x] = cnt;
            cnt_map[x - l] = cnt;
            cnt_map[x + r] = cnt;
        }
    }
    return ret;
}

void LongestConsecutiveSequence::run() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    assert(longest_consecutive(nums) == 4);
    vector<int> nums2 = {0,3,7,2,5,8,4,6,0,1};
    assert(longest_consecutive(nums2) == 9);
}
