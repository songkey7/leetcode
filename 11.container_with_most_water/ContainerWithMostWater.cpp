//
// Created by Qi Song on 08/03/2018.
//

#include "ContainerWithMostWater.h"

int ContainerWithMostWater::max_area2(vector<int> &height) {
    int n = height.size();
    if(n < 2) return 0;
    int ret = 0;
    vector<int> right(n);
    for(int i = n - 1; i >= 0; i--){
        right[i] = i;
        for(int j = i + 1; j < n; j++){
            if(height[i] <= height[j]) {
                right[i] = right[j];
                j = right[j];
            }
        }
        int tmp = height[i] * (right[i] - i);
        ret = max(ret, tmp);
    }
    vector<int> left(n);
    for(int i = 0; i < n; i++){
        left[i] = i;
        for(int j = i - 1; j >= 0; j--){
            if(height[i] <= height[j]){
                left[i] = left[j];
                j = left[j];
            }
        }
        int tmp = height[i] * (i - left[i]);
        ret = max(ret, tmp);
    }
    return ret;
}

int ContainerWithMostWater::max_area(vector<int> &height) {
    int i = 0, j = height.size() - 1;
    int ret = 0;
    while(i < j){
        int h = min(height[i], height[j]);
        ret = max(ret, (j - i) * h);
        while(i < j && height[j] <= h) j--;
        while(i < j && height[i] <= h) i++;
    }
    return ret;
}

void ContainerWithMostWater::run() {
    vector<int> height = {10,14,10,4,10,2,6,1,6,12};
    assert(max_area(height) == 96);
    vector<int> height2 = {2,1};
    assert(max_area2(height2) == 1);
}

