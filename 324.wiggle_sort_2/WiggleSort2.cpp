//
// Created by Qi Song on 10/04/2018.
//

#include "WiggleSort2.h"

void WiggleSort2::wiggle_sort(vector<int> &nums) {
    vector<int> tmp = nums;
    sort(tmp.begin(), tmp.end());
    int n = nums.size();
    if(n <= 2) return;
    int j = n - 1;
    int i = (n - 1) / 2;
    int k=0;
    while(i>=0){
        if(i>=0) nums[k++] = tmp[i--];
        if(j>=0) nums[k++] = tmp[j--];
    }
}

void WiggleSort2::print(vector<int> &nums) {
    for(auto i: nums) cout << i << " ";
    cout << endl;
}

void WiggleSort2::run() {
    vector<int> nums1 = {1, 5, 1, 1, 6, 4};
    wiggle_sort(nums1);
    print(nums1);
    vector<int> nums2 = {1, 3, 2, 2, 3, 1};
    wiggle_sort(nums2);
    print(nums2);
    vector<int> nums3 = {1,2,2,1,2,1,1,1,1,2,2,2};
    wiggle_sort(nums3);
    print(nums3);
}


