//
// Created by Qi Song on 26/07/2018.
//

#include "ValidPalindrome2.h"

bool ValidPalindrome2::valid_palindrome(string s) {
    int i = 0, j = s.length() - 1;
    if(j - i < 2) return true;
    while(i < j){
        if(s[i] == s[j]){
           i++, j--;
        }
        else{
            int ii = i + 1, jj = j;
            while(ii < jj && s[ii] == s[jj]){
               ii++, jj--;
            }
            if(ii >= jj) return true;
            ii = i, jj = j - 1;
            while(ii < jj && s[ii] == s[jj]){
                ii++, jj--;
            }
            return ii >= jj;
        }
    }
    return true;
}

void ValidPalindrome2::run() {
    assert(valid_palindrome("abca"));
    assert(!valid_palindrome("abc"));
    assert(!valid_palindrome("eeccccbebaeeabebccceea"));
    assert(valid_palindrome("aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga"));
}
