//
// Created by Qi Song on 2/1/18.
//

#include "MajorityElement.h"

int MajorityElement::majority_element(vector<int> &nums) {
    size_t n = nums.size();
    int tmp = nums[0];
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(tmp != nums[i]){
            if(cnt == 1)
                tmp = nums[++i];
            else{
                cnt--;
            }
        } else{
            cnt++;
        }
    }
    return tmp;
}

void MajorityElement::run() {
    vector<int> nums = {1,2,3,1,1,2,1};
    assert(majority_element(nums) == 1);
}
