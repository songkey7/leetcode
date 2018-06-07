//
// Created by Qi Song on 2/8/18.
//

#include "TrappingRainWater.h"

int TrappingRainWater::trap(vector<int> &height) {
    size_t n = height.size();
    if(n < 3) return 0;
    stack<pair<int, int>> st;
    int ret = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        while(!st.empty()){
            int h = min(height[i], st.top().second);
            int w = i - st.top().first - 1;
            ret += max(h - b, 0) * w;
            b = h;
            if(st.top().second > height[i]) break;
            st.pop();
        }
        st.push({i,height[i]});
    }
    return ret;
}

void TrappingRainWater::run() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    assert(trap(height) == 6);
    vector<int> height2 = {4,2,3};
    assert(trap(height2) == 1);
}
