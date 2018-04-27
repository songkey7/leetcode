//
// Created by Qi Song on 25/04/2018.
//

#include "LengthOfLastWord.h"

int LengthOfLastWord::length_of_last_word(string s) {
    int cnt = 0;
    int i = s.length() - 1;
    while(s[i] == ' ') i--;
    for(;i >= 0 && s[i] != ' '; i--) cnt++;
    return cnt;
}

void LengthOfLastWord::run() {
    assert(length_of_last_word("Hello World") == 5);
}
