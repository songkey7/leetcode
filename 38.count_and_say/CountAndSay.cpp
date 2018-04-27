//
// Created by Qi Song on 28/03/2018.
//

#include "CountAndSay.h"

string CountAndSay::count_and_say(int n) {
    if(n < 1) return "";
    string ret = "1";
    while(--n){
        ret = count_and_say(ret);
    }
    return ret;
}

string CountAndSay::count_and_say(string nums) {
    int cnt = 0;
    string ret;
    char pre;
    for(auto c: nums) {
        if (pre != c && cnt > 0) {
            ret = ret + to_string(cnt) + pre;
            cnt = 0;
        }
        pre = c;
        cnt ++;
    }
    char tmp[32];
    ret = ret + to_string(cnt) + pre;
    return ret;
}

void CountAndSay::run() {
    assert(count_and_say(4) == "1211");
}


