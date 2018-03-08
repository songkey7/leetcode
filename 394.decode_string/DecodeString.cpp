//
// Created by Qi Song on 1/11/18.
//

#include "DecodeString.h"

string DecodeString::decodeString(string s) {
    size_t end = s.find(']');
    while (end != string::npos)
    {
        size_t beg = s.rfind('[', end);
        size_t n = 0;
        int idx = 0;
        for (int i = beg - 1, base = 1; s[i] >= '0' && s[i] <= '9' && i >= 0; i--, base *= 10, idx++) {
            n = n + int(s[i] - '0') * base;
        }
        string tmp;
        for(size_t i = n; i>0; i--) {
            tmp += s.substr(beg + 1, end - beg - 1);
        }
        s = s.substr(0, beg - idx) + tmp + s.substr(end + 1);
        end = s.find(']');
    }
    return s;
}

void DecodeString::run() {
    string s1 = "3[a]2[bc]";
    assert(decodeString(s1) == "aaabcbc");
    string s2 = "3[a2[c]]";
    assert(decodeString(s2) == "accaccacc");
    string s3 = "2[abc]3[cd]ef";
    assert(decodeString(s3) == "abcabccdcdcdef");
}
