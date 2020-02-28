//
// Created by songkey on 2020/2/28.
//

#include "JumpGame3.h"

bool JumpGame3::canReach(vector<int> &arr, int start) {
    if(start < 0 || start >= arr.size() || arr[start] < 0) return false;
    if(arr[start] == 0) return true;
    int t = arr[start];
    arr[start] = -1;
    return canReach(arr, start + t) || canReach(arr, start - t);
}

void JumpGame3::run() {
    vector<int> arr1 = {4,2,3,0,3,1,2};
    assert(canReach(arr1, 5));

    vector<int> arr2 = {4,2,3,0,3,1,2};
    assert(canReach(arr2, 0));

    vector<int> arr3 = {3,0,2,1,2};
    assert(!canReach(arr3, 2));
}
