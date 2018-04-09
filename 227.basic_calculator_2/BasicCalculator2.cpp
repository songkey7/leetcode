//
// Created by Qi Song on 09/04/2018.
//

#include "BasicCalculator2.h"

int BasicCalculator2::calculate(string s) {
    s = "+" + s + "+";
    int ret = 0;
    int a = 0;
    int b = 0;
    char op = '+';
    int flag = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') continue;
        else if(s[i] >= '0' && s[i] <= '9') b = b * 10 + s[i] - '0';
        else{
            b = flag * b;
            if(op == '*'){
                a *= b;
            }
            else if(op == '/'){
                a /= b;
            }
            else{
                ret += a;
                a = b;
            }
            flag = s[i] == '-' ? -1 : 1;
            op = s[i];
            b = 0;
        }
    }
    return ret + a;
}

void BasicCalculator2::run() {
    assert(calculate(" 3+5 / 2 ") == 5);
    assert(calculate(" 3/2  ") == 1);
    assert(calculate("3+2*2") == 7);
}
