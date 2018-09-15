//
// Created by Qi Song on 06/08/2018.
//

#include "NextGreaterElement2.h"

vector<int> NextGreaterElement2::next_greater_elements(vector<int> nums) {
    int n = nums.size();
    vector<int> ret(n, -1);
    stack<int> st;
    for (int i = 0; i < n * 2; ++i) {
        while(!st.empty() && nums[st.top()] < nums[i % n]){
            ret[st.top()] = nums[i % n];
            st.pop();
        }
        if(i < n) st.push(i);
    }
    return ret;
}

void NextGreaterElement2::run() {
    vector<int> ret = {2,-1,2};
    assert(next_greater_elements({1,2,1}) == ret);
}
