//
// Created by Qi Song on 05/07/2018.
//

#include "RemoveKDigits.h"

string RemoveKDigits::remove_k_digits(string num, int k) {
    int n = num.length();
    string ret;
    int b = 0, e = 0;
    for (int i = 0; i < n; ++i) {
        while(k > 0 && e > 0 && num[i] < ret[e - 1]){
            e--;
            k--;
        }
        if(e < ret.length()) ret[e] = num[i];
        else ret += num[i];
        e++;
    }
    while(ret[b]=='0') b++;
    int l = e - b - k;
    ret = ret.substr(b, l > 0 ? l : 0);
    return ret == "" ? "0" : ret;
}

void RemoveKDigits::run() {
    assert(remove_k_digits("1234567890", 10) == "0");
    assert(remove_k_digits("9", 1) == "0");
    assert(remove_k_digits("1234567890", 9) == "0");
    assert(remove_k_digits("43214321", 4) == "1321");
    assert(remove_k_digits("1432219", 3) == "1219");
    assert(remove_k_digits("10200", 1) == "200");
    assert(remove_k_digits("10", 2) == "0");
}
