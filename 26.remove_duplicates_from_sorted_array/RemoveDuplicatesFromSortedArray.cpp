//
// Created by Qi Song on 27/03/2018.
//

#include "RemoveDuplicatesFromSortedArray.h"

int RemoveDuplicatesFromSortedArray::remove_duplicates(vector<int> &nums) {
    size_t n = nums.size();
    if(n == 0) return 0;
    int len = 1;
    for(int i = 1; i < n; i++){
        if(nums[i] != nums[i-1]){
            nums[len++] = nums[i];
        }
    }
    for(auto x: nums){
        cout << x << " ";
    }
    cout << endl;
    return len;
}

void RemoveDuplicatesFromSortedArray::run() {
    vector<int> nums = {1,1,2};
    assert(remove_duplicates(nums) == 2);
}
