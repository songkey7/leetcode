//
// Created by Qi Song on 1/11/18.
//

#include "ShortestUnsortedContinuousSubarray.h"

int ShortestUnsortedContinuousSubarray::find_unsorted_subarray(vector<int> &nums) {
    size_t n = nums.size();
    int l = 0;
    int r = n - 1;
    for(int i = l; i < n; i++){
        int j = i + 1;
        for(; nums[i] <= nums[j] && j < n; j++);
        if(j == n) l++;
        else break;
    }
    for(int i = r; i >= l; i--){
        int j = i - 1;
        for(; nums[i] >= nums[j] && j >= l; j--);
        if(j < l) r--;
        else break;
    }
    return r - l + 1;
}

int ShortestUnsortedContinuousSubarray::find_unsorted_subarray2(vector<int> &nums) {
    size_t n = nums.size();
    int ma = nums[0];
    int mi = nums[n-1];
    int b = 1, e = 0;
    for(int i = 1; i < n; i++){
        ma = max(ma, nums[i]);
        mi = min(mi, nums[n-1-i]);
        if(nums[i] < ma) e = i;
        if(nums[n-1-i] > mi) b = n-1-i;
    }
    return e - b + 1;
}

void ShortestUnsortedContinuousSubarray::run() {
    vector<int> nums3 = {3,2,3,2,4};
    assert(find_unsorted_subarray2(nums3) == 4);
    vector<int> nums2 = {1,2,3,3,3};
    assert(find_unsorted_subarray2(nums2) == 0);
    vector<int> nums = {2, 6, 4, 8, 10, 9, 15};
    assert(find_unsorted_subarray2(nums) == 5);
    vector<int> nums1 = {1,2,3,4};
    assert(find_unsorted_subarray2(nums1) == 0);
}
