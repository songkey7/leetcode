//
// Created by user on 02/03/2018.
//

#include "SlidingWindowMaximum.h"

bool SlidingWindowMaximum::check_heap(vector<pair<int, int>> &heap) {
    int n = heap.size();
    for(int i = 0; i <= (n - 1)/2; i++)
    {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if(l < n && heap[i].first < heap[l].first) return false;
        if(r < n && heap[i].first < heap[r].first) return false;
    }
    return true;
}

vector<int> SlidingWindowMaximum::max_sliding_window2(vector<int> &nums, int k) {
    deque<int> dq;
    vector<int> ret;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(dq.front() == i-k) dq.pop_front();
        while(!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
        dq.push_back(i);
        if(i >= k -1) ret.push_back(nums[dq.front()]);
    }
    return ret;
}

vector<int> SlidingWindowMaximum::max_sliding_window(vector<int> &nums, int k) {
    vector<pair<int, int>> heap; // (value, num_index)
    int n = nums.size();
    vector<int> idx_map(n,0); // heap_index
    vector<int> ret;
    if(n == 0) return ret;
    int i = 0;
    for(; i < k; i++){
        heap.push_back(make_pair(nums[i], i));
        idx_map[i] = i;
        int j = i;
        for(; j > 0 && heap[j].first > heap[(j - 1)/2].first; j = (j - 1) / 2){
            swap(heap[j], heap[(j - 1)/2]);
            idx_map[heap[j].second] = j;
            idx_map[heap[(j - 1)/2].second] = (j - 1)/2;
        }
    }
    ret.push_back(heap[0].first);
    for(;i < n; i++){
        int j = idx_map[i - k];
        heap[j] = make_pair(nums[i], i);
        idx_map[i] = j;
        for(; j > 0 && heap[j].first > heap[(j - 1)/2].first; j = (j -1) / 2){
            swap(heap[j], heap[(j - 1)/2]);
            idx_map[heap[j].second] = j;
            idx_map[heap[(j - 1)/2].second] = (j - 1)/2;
        }
        while(j <= (n-1)/2){
            int m = j;
            if(2 * j + 1 < heap.size() && heap[2 * j + 1].first > heap[m].first) m = 2 * j + 1;
            if(2 * j + 2 < heap.size() && heap[2 * j + 2].first > heap[m].first) m = 2 * j + 2;
            if(j == m) break;
            swap(heap[m], heap[j]);
            idx_map[heap[j].second] = j;
            idx_map[heap[m].second] = m;
            j = m;
        }
        ret.push_back(heap[0].first);
    }

    return ret;
}

void SlidingWindowMaximum::run() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    vector<int> ret = {3,3,5,5,6,7};
    //vector<int> nums = {-95,92,-85,59,-59,-14,88,-39,2,92,94,79,78,-58,37,48,63,-91,91,74,-28,39,90,-9,-72,-88,-72,93,38,14,-83,-2,21,4,-75,-65,3,63,100,59,-48,43,35,-49,48,-36,-64,-13,-7,-29,87,34,56,-39,-5,-27,-28,10,-57,100,-43,-98,19,-59,78,-28,-91,67,41,-64,76,5,-58,-89,83,26,-7,-82,-32,-76,86,52,-6,84,20,51,-86,26,46,35,-23,30,-51,54,19,30,27,80,45,22};
    //vector<int> ret = {92,94,94,94,94,94,94,94,94,94,94,91,91,91,91,91,91,91,93,93,93,93,93,93,93,93,93,93,63,100,100,100,100,100,100,100,100,100,100,59,48,87,87,87,87,87,87,87,87,87,100,100,100,100,100,100,100,100,100,100,78,78,78,78,78,83,83,83,83,83,83,86,86,86,86,86,86,86,86,86,86,84,84,84,54,54,54,54,80,80,80};
    assert(max_sliding_window(nums, 3) == ret);
}


