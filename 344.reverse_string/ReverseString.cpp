//
// Created by Qi Song on 17/04/2018.
//

#include "ReverseString.h"

string ReverseString::reverse_string(string s) {
    for(int i = 0, j = s.length() - 1; i < j; i++, j--)
        swap(s[i], s[j]);
    return s;
}

void ReverseString::run() {
    assert(reverse_string("hello") == "olleh");
}
