//
// Created by Qi Song on 08/04/2018.
//

#include "ContainsDuplicate.h"

bool ContainsDuplicate::contains_duplicate(vector<int> &nums) {
    unordered_set<int> st(nums.begin(), nums.end());
    return st.size() < nums.size();
}

void ContainsDuplicate::run() {
    vector<int> nums = {1,3,4,2,4};
    assert(contains_duplicate(nums));
}
