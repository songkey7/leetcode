//
// Created by Qi Song on 03/04/2018.
//

#include "ValidPalindrome.h"

bool ValidPalindrome::is_palindrome(string s) {
    int i = 0, j = s.length() - 1;
    while(i <= j){
        while(i <= j && !is_char(s[i])) i++;
        while(i <= j && !is_char(s[j])) j--;
        if(i <= j && s[i++] != s[j--]) return false;
    }
    return true;
}

bool ValidPalindrome::is_char(char &c) {
    if(c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
        return true;
    }
    else if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
        return true;
    }
    return false;
}

void ValidPalindrome::run() {
    assert(is_palindrome(" "));
    assert(is_palindrome("A man, a plan, a canal: Panama"));
    assert(!is_palindrome("race a car"));
}


