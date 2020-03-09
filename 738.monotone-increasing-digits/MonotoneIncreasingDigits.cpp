//
// Created by songkey on 2020/3/6.
//

#include "MonotoneIncreasingDigits.h"

int MonotoneIncreasingDigits::monotoneIncreasingDigits(int N) {
    auto s = to_string(N);
    int n = static_cast<int>(s.length());
    int idx = n;
    for (int i = n - 1; i > 0; --i) {
       if(s[i] < s[i-1]){
           idx = i;
           s[i-1]--;
       }
    }
    for (int i = idx; i < n; ++i) {
        s[i] = '9';
    }
    return stoi(s);
}

void MonotoneIncreasingDigits::run() {
    assert(monotoneIncreasingDigits(100) == 99);
    assert(monotoneIncreasingDigits(10) == 9);
    assert(monotoneIncreasingDigits(1234) == 1234);
    assert(monotoneIncreasingDigits(332) == 299);
}
