//
// Created by songkey on 2020/3/5.
//

#include "ReplaceTheSubstringForBalancedString.h"

int ReplaceTheSubstringForBalancedString::balancedString(string s) {
    unordered_map<int, int> counter;
    int n = s.length(), k = n / 4, ret = n;
    for(auto c: s) {
        counter[c]++;
    }
    int m = 0;
    for(auto itr: counter) {
        if(itr.second > k) m += (itr.second - k);
    }
    for (int i = 0, j = 0; j < n; ++j) {
       counter[s[j]]--;
       while(counter['Q'] <= k && counter['W'] <= k && counter['E'] <= k && counter['R'] <= k && i < n){
           ret = min(ret, j - i + 1);
           if(ret <= m) break;
           counter[s[i++]]++;
       }
    }
    return ret;
}

void ReplaceTheSubstringForBalancedString::run() {
    assert(balancedString("WWEQERQWQWWRWWERQWEQ") == 4);
    assert(balancedString("QWER") == 0);
    assert(balancedString("QQWE") == 1);
    assert(balancedString("QQQW") == 2);
    assert(balancedString("QQQQ") == 3);
}
