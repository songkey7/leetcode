//
// Created by Qi Song on 20/04/2018.
// Two Pointers
//

#include "TwoSum2.h"

vector<int> TwoSum2::two_sum(vector<int> &numbers, int target) {
    int n = numbers.size();
    for(int i = 0; i < n - 1; i++){
        int l = i + 1, r = n - 1;
        int t = target - numbers[i];
        while(l <= r){
            int m = (l + r) / 2;
            if(numbers[m] == t) return {i + 1, m + 1};
            else if(numbers[m] > t) r = m - 1;
            else l = m + 1;
        }
    }
    return vector<int>();
}

vector<int> TwoSum2::two_sum2(vector<int> &numbers, int target) {
    int i = 0, j = numbers.size() - 1;
    while(i < j){
        int t = numbers[i] + numbers[j];
        if(t == target) return {i + 1, j + 1};
        else if(t > target) j--;
        else i++;
    }
    return vector<int>();
}

void TwoSum2::run() {
    vector<int> numbers = {2, 7, 11, 15};
    vector<int> ret = {1, 2};
    assert(two_sum2(numbers, 9) == ret);
}

