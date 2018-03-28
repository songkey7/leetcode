//
// Created by Qi Song on 28/03/2018.
//

#include "CountAndSay.h"

string CountAndSay::count_and_say(int n) {
    if(n == 0) return "";
    string ret = "1";
    while (--n) ret = count_and_say(ret) ;
    return ret;
}

string CountAndSay::count_and_say(string nums) {
    int count = 0;
    char pre;
    string ret;
    for(auto c: nums){
        if(c!=pre && count > 0){
            ret = ret + char(count + '0') + pre;
            count = 0;
        }
        count++;
        pre = c;
    }
    if(count > 0){
        ret = ret + char(count + '0') + pre;
    }
    return ret;
}

void CountAndSay::run() {
    assert(count_and_say(4) == "1211");
}


