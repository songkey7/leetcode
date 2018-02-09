//
// Created by Qi Song on 2/9/18.
//

#include "LargestRectangleInHistogram.h"

int LargestRectangleInHistogram::largest_rectangle_area(vector<int> &heights) {
    int ret = 0;
    int n = heights.size();
    if(n == 0) return 0;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        dp[i][i] = heights[i];
        ret = max(ret, dp[i][i]);
        for(int j = 0; j < i; j++){
            dp[j][i] = min(dp[j][i-1], heights[i]);
            ret = max(ret, (i - j + 1) * (dp[j][i]));
        }
    }
    return ret;
}

int LargestRectangleInHistogram::largest_rectangle_area_left_right(vector<int> &heights) {
    int n = heights.size();
    vector<int> left(n,0);
    vector<int> right(n,n-1);
    for(int i = 1; i < n; i++){
        int j = i - 1;
        while(j>=0 && heights[j] >= heights[i]){
            j = left[j] - 1;
        }
        left[i] = j + 1;
    }
    for(int i = n - 2; i >= 0; i--){
        int j = i + 1;
        while(j < n && heights[j] >= heights[i]){
            j = right[j] + 1;
        }
        right[i] = j - 1;
    }
    int ret = 0;
    for(int i = 0; i < n; i++){
        ret = max(ret, heights[i] * (right[i] - left[i] + 1));
    }
    return ret;
}

void LargestRectangleInHistogram::run() {
    vector<int> nums = {2,1,5,6,2,3};
    assert(largest_rectangle_area_left_right(nums) == 10);
    vector<int> nums1 = {1, 9};
    assert(largest_rectangle_area_left_right(nums1) == 9);

}


