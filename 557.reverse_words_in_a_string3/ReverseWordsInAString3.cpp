//
// Created by Qi Song on 24/07/2018.
//

#include "ReverseWordsInAString3.h"

string ReverseWordsInAString3::reverse_words(string s) {
    int b = 0, e = 0;
    int n = s.length();
    for(; e < n; e++){
        if(s[e] == ' '){
            int i = b, j = e - 1;
            while(i < j){
                swap(s[i++], s[j--]);
            }
            b = e + 1;
        }
    }
    while(b < e){
        swap(s[b++], s[--e]);
    }
    return s;
}

void ReverseWordsInAString3::run() {
    assert(reverse_words("Let's take LeetCode contest") == "s'teL ekat edoCteeL tsetnoc");
}
