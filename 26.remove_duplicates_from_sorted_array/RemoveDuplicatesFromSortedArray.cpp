//
// Created by Qi Song on 27/03/2018.
//

#include "RemoveDuplicatesFromSortedArray.h"

int RemoveDuplicatesFromSortedArray::remove_duplicates(vector<int> &nums) {
    int n = nums.size();
    if(n == 0) return 0;
    int i = 0;
    for(int j = 1; j < nums.size(); j++)
        if(nums[i] != nums[j]) nums[++i] = nums[j];
    return i + 1;
}

void RemoveDuplicatesFromSortedArray::run() {
    vector<int> nums = {1,1,2};
    int n = remove_duplicates(nums);
    for(int i = 0; i < n; i++) cout << nums[i] << " ";
    cout << endl;
}
