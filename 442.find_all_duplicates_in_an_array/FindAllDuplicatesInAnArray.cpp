//
// Created by Qi Song on 12/06/2018.
//

#include "FindAllDuplicatesInAnArray.h"

vector<int> FindAllDuplicatesInAnArray::find_duplicates(vector<int> nums) {
    size_t n = nums.size();
    vector<int> ret;
    for (int i = 0; i < n; ++i) {
        int idx = nums[i] - 1;
        if(nums[i] == 0 || i == idx) continue;
        if(nums[i] == nums[idx]){
            ret.push_back(nums[i]);
            nums[i] = 0;
        }
        else{
            swap(nums[i], nums[idx]);
            i--;
        }
    }
    return ret;
}

void FindAllDuplicatesInAnArray::run() {
    vector<int> ret = {3, 2};
    assert(find_duplicates({4,3,2,7,8,2,3,1}) == ret);
}
