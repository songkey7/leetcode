//
// Created by Qi Song on 27/03/2018.
//

#include "LongestCommonPrefix.h"

string LongestCommonPrefix::longest_common_prefix(vector<string> &strs) {
    string ret = "";
    int n = strs.size();
    if(n == 0) return ret;

    for(int i = 0; i < strs[0].length(); i++){
        char tmp = strs[0][i];
        for(int j = 1; j < n; j++){
            if(i >= strs[j].length() || tmp != strs[j][i]) return ret;
        }
        ret += tmp;
    }
    return ret;
}

void LongestCommonPrefix::run() {
    vector<string> strs = {"abc", "abd", "abef"};
    assert(longest_common_prefix(strs) == "ab");
}
