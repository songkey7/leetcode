//
// Created by Qi Song on 07/05/2018.
//

#include "MultiplyStrings.h"

string MultiplyStrings::multiply(string num1, string num2) {
    if(num1 == "0" || num2 == "0") return "0";
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    string ret(num1.size() + num2.size(), '0');
    for (int i = 0; i < num1.size(); ++i) {
        int a = num1[i] - '0';
        int carry = 0;
        int j = 0;
        for (; j < num2.size(); ++j) {
            int t = (num2[j] - '0') * a + carry + ret[i + j] - '0';
            ret[i + j] = char(t % 10 + '0');
            carry = t / 10;
        }
        if(carry) ret[i + j] = char(carry + '0');
    }
    int n = ret.size() - 1;
    while(ret[n] == '0') n--;
    ret.resize(n + 1);
    reverse(ret.begin(), ret.end());
    return ret;
}

void MultiplyStrings::run() {
    assert(multiply("2", "3") == "6");
    assert(multiply("123", "456") == "56088");
}


