//
// Created by Qi Song on 2/28/18.
//

#include "CountOfSmallerNumbersAfterSelf.h"

vector<int> CountOfSmallerNumbersAfterSelf::count_smaller(vector<int> &nums) {
    int n = nums.size();
    vector<int> ret(n, 0);
    vector<int> tmp;
    for(int i = n - 1; i >= 0; i--){
        int l = 0, r = tmp.size();
        while(l < r){
            int m = (l + r) / 2;
            if(tmp[m] < nums[i]) l = m + 1;
            else r = m;
        }
        ret[i] = r;
        tmp.insert(tmp.begin() + r, nums[i]);
    }
    return ret;
}

void CountOfSmallerNumbersAfterSelf::run() {
    vector<int> nums = {5,2,6,1};
    vector<int> ret = {2,1,1,0};
    assert(count_smaller(nums) == ret);

}
