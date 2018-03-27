//
// Created by Qi Song on 27/03/2018.
//

#include "LongestCommonPrefix.h"

string LongestCommonPrefix::longest_common_prefix(vector<string> &strs) {
    int n = strs.size();
    if(n == 0) return "";
    for(int i = 0; i < strs[0].size(); i++){
        char c = strs[0][i];
        bool flag = false;
        for(int j = 1; j < n; j++)
        {
            if(i >= strs[j].size() || strs[j][i] != c){
                flag = true;
                break;
            }
        }
        if(flag){
            return strs[0].substr(0, i);
        }
    }
    return strs[0];
}

void LongestCommonPrefix::run() {
    vector<string> strs = {"abc", "abd", "abef"};
    assert(longest_common_prefix(strs) == "ab");
}
