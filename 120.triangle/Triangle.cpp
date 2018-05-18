//
// Created by Qi Song on 16/05/2018.
//

#include "Triangle.h"

int Triangle::minimum_total(vector<vector<int>> &triangle) {
    int n = triangle.size();
    if(n == 0) return 0;
    if(n == 1) return triangle[0][0];
    vector<int> dp(n + 2, INT_MAX);
    dp[1] = triangle[0][0];
    int ret = INT_MAX;
    for (int i = 1; i < n; ++i) {
        for (int j = 0, pre = dp[0]; j < triangle[i].size(); ++j) {
            int tmp = dp[j + 1];
            dp[j + 1] = triangle[i][j] + min(pre, dp[j + 1]);
            pre = tmp;
            if(i == n - 1) ret = min(ret, dp[j + 1]);
        }
    }
    return ret;
}

int Triangle::minimum_total2(vector<vector<int>> &triangle) {
    int n = triangle.size();
    if(n == 0) return 0;
    vector<int> dp = triangle[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < triangle[i].size(); ++j) {
            dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
        }
    }
    return dp[0];
}

void Triangle::run() {
    vector<vector<int>> triangle = {
            {2},
            {3,4},
            {6,5,7},
            {4,1,8,3}};
    assert(minimum_total(triangle) == 11);
    assert(minimum_total2(triangle) == 11);
}

