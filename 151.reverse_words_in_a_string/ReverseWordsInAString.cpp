//
// Created by Qi Song on 17/05/2018.
//

#include "ReverseWordsInAString.h"

void ReverseWordsInAString::reverse_words(string &s) {
    reverse(s.begin(), s.end());
    int n = s.length();
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        if((idx == 0 && s[i] == ' ') || (i > 0 && s[i - 1] == ' ' && s[i] == ' ')) continue;
        s[idx++] = s[i];
    }
    int b = 0;
    while(s[idx - 1] == ' ') idx--;
    s.resize(idx);
    int e = s.find(' ', b);
    while(e != string::npos){
        reverse(s.begin() + b, s.begin() + e);
        b = e + 1;
        e = s.find(' ', b);
    }
    reverse(s.begin() + b, s.end());
}

void ReverseWordsInAString::run() {
    string str = "the sky is blue";
    string ret = "blue is sky the";
    reverse_words(str);
    assert(str == ret);
}
