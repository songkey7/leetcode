//
// Created by Qi Song on 20/04/2018.
//

#include "RemoveElement.h"

int RemoveElement::remove_element(vector<int> &nums, int val) {
    int i = 0;
    for(int j = 0; j < nums.size(); j++){
        if(nums[j] != val) nums[i++] = nums[j];
    }
    return i;
}

void RemoveElement::run() {
    vector<int> nums1 = {3,2,2,3};
    int n1 = remove_element(nums1, 3);
    print_vector(nums1, n1);

    vector<int> nums2 = {0,1,2,2,3,0,4,2};
    int n2 = remove_element(nums2, 2);
    print_vector(nums2, n2);
}
