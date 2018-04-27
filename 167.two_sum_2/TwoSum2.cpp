//
// Created by Qi Song on 20/04/2018.
// Two Pointers
//

#include "TwoSum2.h"

vector<int> TwoSum2::two_sum(vector<int> &numbers, int target) {
    unordered_map<int, int> num_map;
    int n = numbers.size();
    for(int i = 0; i < n; i++){
        auto itr = num_map.find(numbers[i]);
        if(itr != num_map.end()) return {itr->second + 1, i + 1};
        num_map[target - numbers[i]] = i;
    }
    return {};
}

vector<int> TwoSum2::two_sum2(vector<int> &numbers, int target) {
    for(int i = 0, j = numbers.size() - 1; i < j;){
        int tmp = numbers[i] + numbers[j];
        if(tmp == target) return {i + 1, j + 1};
        else if(tmp > target) j--;
        else i++;
    }
    return {};
}

void TwoSum2::run() {
    vector<int> numbers = {2, 7, 11, 15};
    vector<int> ret = {1, 2};
    assert(two_sum2(numbers, 9) == ret);
}

