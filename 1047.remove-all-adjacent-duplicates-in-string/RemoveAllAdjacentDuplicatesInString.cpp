//
// Created by songkey on 2020/3/10.
//

#include "RemoveAllAdjacentDuplicatesInString.h"

string RemoveAllAdjacentDuplicatesInString::removeDuplicates(string s) {
    int i = 0;
    for (int j = 0; j < s.length(); ++j, ++i) {
        s[i] = s[j];
        if(i > 0 && s[i] == s[i - 1]) i-=2;
    }
    return s.substr(0, i);
}

string RemoveAllAdjacentDuplicatesInString::removeDuplicates2(string s) {
    stack<char> st;
    for(auto c: s){
        if(!st.empty() && st.top() == c){
            st.pop();
        } else {
            st.push(c);
        }
    }
    string ret;
    while(!st.empty()){
        char c = st.top();
        ret = c + ret;
        st.pop();
    }
    return ret;
}

void RemoveAllAdjacentDuplicatesInString::run() {
    assert(removeDuplicates("abbaca") == "ca");
}
