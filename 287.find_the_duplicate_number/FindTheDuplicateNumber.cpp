//
// Created by Qi Song on 2/7/18.
//

#include "FindTheDuplicateNumber.h"

int FindTheDuplicateNumber::find_duplicate(vector<int> &nums) {
    int n = nums.size();
    int l = 1;
    int r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        int cnt1 = 0;
        int cnt2 = 0;
        for(auto x: nums) {
            if(x < m) cnt1 ++;
            if(x > m) cnt2 ++;
        }
        if(cnt1 + cnt2 <= n - 2) return m;
        else if(cnt1 >= m) r = m - 1;
        else l = m + 1;
    }
    return -1;
}

int FindTheDuplicateNumber::find_duplicate2(vector<int> &nums) {
    int p1 = nums[0], p2 = nums[nums[0]];
    while(p1 != p2){
        p1 = nums[p1];
        p2 = nums[nums[p2]];
    }
    p2 = 0;
    while(p1 != p2){
        p1 = nums[p1];
        p2 = nums[p2];
    }
    return p1;
}

void FindTheDuplicateNumber::run() {
    vector<int> nums = {1,2,3,4,5,1};
    assert(find_duplicate(nums) == 1);
    assert(find_duplicate2(nums) == 1);
}

