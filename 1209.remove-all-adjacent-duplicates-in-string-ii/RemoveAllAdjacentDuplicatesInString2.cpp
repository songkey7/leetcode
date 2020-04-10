//
// Created by songkey on 2020/3/10.
//

#include "RemoveAllAdjacentDuplicatesInString2.h"

string RemoveAllAdjacentDuplicatesInString2::removeDuplicates(string s, int k) {
    int i = 0;
    size_t n = s.length();
    vector<int> count(n, 0);
    for (int j = 0; j < n; ++j, ++i) {
        s[i] = s[j];
        count[i] = i > 0 && s[j] == s[i - 1] ? count[i - 1] + 1 : 1;
        if(count[i] == k) i -= k;
    }
    return s.substr(0, i);
}

string RemoveAllAdjacentDuplicatesInString2::removeDuplicates2(string s, int k) {
    stack<pair<char, int>> st;
    for(auto c: s) {
        if(!st.empty()){
            auto &t = st.top();
            if(t.first == c) {
                if (t.second == k - 1) {
                    st.pop();
                } else {
                    t.second++;
                }
            } else {
                st.push(make_pair(c, 1));
            }
        } else {
            st.push(make_pair(c, 1));
        }
    }
    string ret;
    while(!st.empty()){
        auto t = st.top();
        while(t.second--){
           ret = t.first + ret;
        }
        st.pop();
    }
    return ret;
}

void RemoveAllAdjacentDuplicatesInString2::run() {
    assert(removeDuplicates("abcd",2) == "abcd");
    assert(removeDuplicates("deeedbbcccbdaa",3) == "aa");
    assert(removeDuplicates("pbbcggttciiippooaais",2) == "ps");
}


