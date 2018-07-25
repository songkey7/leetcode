//
// Created by Qi Song on 05/07/2018.
//

#include "JewelsAndStones.h"

int JewelsAndStones::num_jewe_is_in_stones(string J, string S) {
    int ret = 0;
    unordered_set<char> c_set(J.begin(), J.end());
    for(auto c: S){
        if(c_set.find(c) != c_set.end()){
            ret++;
        }
    }
    return ret;
}

void JewelsAndStones::run() {
    assert(num_jewe_is_in_stones("aA", "aAAbbbb") == 3);
}
