//
// Created by Qi Song on 2/2/18.
//

#include "KthLargestElementInAnArray.h"

int KthLargestElementInAnArray::find_Kth_largest(vector<int> &nums, int k) {
    return find_Kth_largest_heap_sort(nums, k);
    return find_Kth_largest_partition(nums, k);
    return find_Kth_largest_priority_queue(nums, k);
}

int KthLargestElementInAnArray::partition(vector<int> &nums, int l, int r) {
    int i = l;
    int j = r;
    int x = nums[l];
    while(i < j){
        while(nums[j] <= x && i < j) j--;
        nums[i] = nums[j];
        while(nums[i] >= x && i < j) i++;
        nums[j] = nums[i];
    }
    nums[i] = x;
    return i;
}

int KthLargestElementInAnArray::find_Kth_largest_partition(vector<int> &nums, int k) {
    int l = 0;
    int r = nums.size() - 1;
    while(l < r){
        int m = partition(nums, l, r);
        if(k - 1 == m) return nums[m];
        else if(k - 1 < m) r = m - 1;
        else l = m + 1;
    }
    return nums[l];
}


int KthLargestElementInAnArray::find_Kth_largest_priority_queue(vector<int> &nums, int k) {
    priority_queue<int> q(nums.begin(), nums.end());
    for(int i = 0; i < k - 1; i++){
        q.pop();
    }
    return q.top();
}

void KthLargestElementInAnArray::heapify(vector<int> &nums, int i, int n) {
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int j = i;
    if(l < n && nums[l] > nums[j]) j = l;
    if(r < n && nums[r] > nums[j]) j = r;
    if(j == i) return;
    swap(nums[i], nums[j]);
    heapify(nums, j, n);
}

void KthLargestElementInAnArray::build_heap(vector<int> &nums) {
    int n = nums.size();
    for (int i = n / 2 - 1 ; i >= 0; --i) {
        heapify(nums, i, n);
    }
}

void KthLargestElementInAnArray::build_heap(vector<int> &nums) {
    int n = nums.size();
    for (int i = n / 2 - 1; i >= 0 ; --i) {
        heapify(nums, i, n);
    }
}

int KthLargestElementInAnArray::find_Kth_largest_heap_sort(vector<int> &nums, int k) {
    build_heap(nums);
    int n = nums.size();
    for (int i = 0; i < k - 1; ++i) {
        swap(nums[0], nums[n - 1 - i]);
        heapify(nums, 0, n - 1 - i);
    }
    return nums[0];
}

void KthLargestElementInAnArray::run() {
    vector<int> nums = {3,2,1,5,6,4};
    assert(find_Kth_largest(nums, 2) == 5);
    vector<int> nums2 = {5,2,4,1,3,6,0};
    assert(find_Kth_largest(nums2, 4) == 3);
}

