//
// Created by Qi Song on 03/04/2018.
//

#include "ValidPalindrome.h"
#include <ctype.h>

bool ValidPalindrome::is_palindrome(string s) {
    for(int i = 0, j = s.length() - 1; i <=j;){
        while(!isalnum(s[i])) i++;
        while(!isalnum(s[j])) j--;
        if(i<=j && tolower(s[i++]) != tolower(s[j--])) return false;
    }
    return true;
}

void ValidPalindrome::run() {
    assert(is_palindrome(" "));
    assert(is_palindrome("A man, a plan, a canal: Panama"));
    assert(!is_palindrome("race a car"));
}


