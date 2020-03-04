//
// Created by songkey on 2020/2/29.
//

#include "BinarySearch.h"

int BinarySearch::search(vector<int> &nums, int target) {
    int i = 0, j = nums.size() - 1;
    while(i <= j) {
        int mid = (i + j) / 2;
        if (nums[mid] == target) return mid;
        else if(target < nums[mid]) j = mid - 1;
        else i = mid + 1;
    }
    return -1;
    return search(nums, 0, nums.size() - 1, target);
}

int BinarySearch::search(vector<int> &nums, int l, int r, int target) {
    if(l > r) return -1;
    int mid = (l + r) / 2;
    if (nums[mid] == target) return mid;
    else if(target < nums[mid]) return search(nums, l, mid - 1, target);
    else return search(nums, mid + 1, r, target);
}

void BinarySearch::run() {
    vector<int> arr1 = {-1,0,3,5,9,12};
    assert(search(arr1, 9) == 4);
    assert(search(arr1, 2) == -1);
}
