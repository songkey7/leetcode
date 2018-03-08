//
// Created by Qi Song on 08/03/2018.
//

#include "ContainerWithMostWater.h"

int ContainerWithMostWater::max_area(vector<int> &height) {
    int i = 0;
    int j = height.size() - 1;
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
    //vector<int> height = {2,1};
    //assert(max_area(height) == 1);
}
