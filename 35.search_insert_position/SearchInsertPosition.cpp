//
// Created by Qi Song on 19/04/2018.
//

#include "SearchInsertPosition.h"

int SearchInsertPosition::search_insert(vector<int> nums, int target) {
    int i = 0, j = nums.size() - 1;
    // the comparison operator here is <= bcz nums[i] == nums[j] == target
    while(i <= j){
        int m = (i + j) / 2;
        if(nums[m] == target) return m;
        else if(nums[m] > target) j = m - 1;
        else i = m + 1;
    }
    // pay attention to the insert pos
    return i;
}

void SearchInsertPosition::run() {
    assert(search_insert({1,3,5,6}, 5) == 2);
    assert(search_insert({1,3,5,6}, 2) == 1);
    assert(search_insert({1,3,5,6}, 7) == 4);
    assert(search_insert({1,3,5,6}, 0) == 0);
}
