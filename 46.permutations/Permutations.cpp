//
// Created by Qi Song on 2/2/18.
//

#include "Permutations.h"

vector<vector<int>> Permutations::permute(vector<int> &nums) {
    if(nums.size() == 0)
        return vector<vector<int>>();
    vector<vector<int>> ret = {{nums[0]}};
    for(int i = 1; i < nums.size(); i++){
        vector<vector<int>> tmp;
        for(auto r: ret){
            for(int j = 0; j <= r.size(); j++) {
                vector<int> t = r;
                t.push_back(0);
                int k = r.size() - 1;
                for(; k >= j; k--){
                    t[k + 1] = t[k];
                }
                t[k + 1] = nums[i];
                tmp.push_back(t);
            }
        }
        ret = tmp;
    }
    return ret;
}

void Permutations::run() {
    vector<int> nums = {1,2,3};
    for(auto v: permute(nums)){
        for(auto x: v){
            cout << x << " ";
        }
        cout << endl;
    }

}
