//
// Created by Qi Song on 1/8/18.
//

#include <set>
#include "WordBreak.h"

bool WordBreak::word_break(const string &s, vector<string> &wordDict) {
    int n = s.size();
    if (n <= 0 || wordDict.empty()) return false;

    set<string> wordSet(wordDict.begin(), wordDict.end());

    vector<bool> flag(n + 1, false);
    flag[0] = true;
    for(int i = 1; i < n + 1; ++i)
    {
        for(int j = 0; j < i; ++j){
            if(flag[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()){
                flag[i] = true;
                break;
            }
        }
    }
    return flag[n];
}

int WordBreak::run(){
    string s = "freewheel";
    vector<string> dict = {"free", "wheel"};

    if(word_break(s, dict))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}

