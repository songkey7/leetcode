//
// Created by Qi Song on 2/8/18.
//

#include "TrappingRainWater.h"

int TrappingRainWater::trap(vector<int> &height) {
    size_t n = height.size();
    if(n == 0) return 0;
    stack<pair<int, int>> st;
    int ret = 0;
    int base = 0;
    for(int i = 0; i < n; i++){
        int h = height[i];
        while(!st.empty()){
            auto x = st.top();
            ret += max(min(x.second, h) - base, 0) * max(i - x.first - 1, 0);
            base = x.second;
            if(x.second > h) break;
            st.pop();
        }
        st.push({i, h});
        base = h;
    }
    return ret;
}

void TrappingRainWater::run() {
    //vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    //assert(trap(height) == 6);
    vector<int> height = {4,2,3};
    assert(trap(height) == 1);
}
