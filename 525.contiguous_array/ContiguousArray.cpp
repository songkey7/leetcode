//
// Created by Qi Song on 12/07/2018.
//

#include "ContiguousArray.h"

int ContiguousArray::find_max_length(vector<int> nums) {
    int n = nums.size();
    int sum = 0, ret = 0;
    unordered_map<int, int> m;
    m[0] = -1;
    for (int i = 0; i < n; ++i) {
        int tmp = (nums[i] == 0) ? -1 : nums[i];
        sum += tmp;
        unordered_map<int, int>::const_iterator itr = m.find(sum);
        if(itr != m.end()){
            ret = max(ret, i - (*itr).second);
        }
        else {
            m[sum] = i;
        }
    }
    return ret;
}

void ContiguousArray::run() {
    assert(find_max_length({1,0,1}) == 2);
}
