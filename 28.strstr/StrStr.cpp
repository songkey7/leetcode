//
// Created by Qi Song on 28/03/2018.
//

#include "StrStr.h"

int StrStr::strstr(string haystack, string needle) {
    int n2 = needle.length();
    if(n2 == 0) return 0;
    int n1 = haystack.length();
    for(int i = 0; i <= n1 - n2; i++){
        if(haystack[i] == needle[0]) {
            int j = 1;
            for(; j < n2 && needle[j] == haystack[i + j]; j++);
            if(j == n2) return i;
        }
    }
    return -1;
}

void StrStr::run() {
    assert(strstr("", "a") == -1);
    assert(strstr("hello", "ll") == 2);
}
