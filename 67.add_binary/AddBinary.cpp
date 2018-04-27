//
// Created by Qi Song on 26/04/2018.
//

#include "AddBinary.h"

string AddBinary::add_binary(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    string ret = "";
    int i = 0;
    for(;i < a.size() && i < b.size(); i++){
        int tmp = ((a[i] == '1') ? 1 : 0) + ((b[i] == '1') ? 1 : 0) + carry;
        ret += tmp % 2 ? '1' : '0';
        carry = tmp / 2;
    }
    for(;i < a.size(); i++){
        int tmp = ((a[i] == '1') ? 1 : 0) + carry;
        ret += tmp % 2 ? '1' : '0';
        carry = tmp / 2;
    }
    for(;i < b.size(); i++){
        int tmp = ((b[i] == '1') ? 1 : 0) + carry;
        ret += tmp % 2 ? '1' : '0';
        carry = tmp / 2;
    }

    if(carry) ret += '1';
    reverse(ret.begin(), ret.end());
    return ret;
}

void AddBinary::run() {
    assert(add_binary("11", "1") == "100");
    assert(add_binary("1010", "1011") == "10101");
}
