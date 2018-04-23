//
// Created by Qi Song on 2/1/18.
//

#include "MajorityElement.h"

int MajorityElement::majority_element(vector<int> &nums) {
    int ret = nums[0];
    int cnt = 1;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == ret) cnt++;
        else cnt--;
        if(cnt == 0){
            ret = nums[++i];
            cnt = 1;
        }
    }
    return ret;
}

void MajorityElement::run() {
    vector<int> nums = {1,2,3,1,1,2,1};
    assert(majority_element(nums) == 1);
}
