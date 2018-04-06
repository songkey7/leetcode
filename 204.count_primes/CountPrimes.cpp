//
// Created by Qi Song on 06/04/2018.
//

#include "CountPrimes.h"

int CountPrimes::count_primes(int n){
    if(n < 3) return 0;
    int ret = 1;
    vector<bool> visit(n, false);
    int m = sqrt(n);
    for(int i = 3; i < n; i+=2){
        if(!visit[i]){
            ret++;
            if(i > m) continue;
            for(int j = i * i; j < n; j += i){
                visit[j] = true;
            }
        }
    }
    return ret;
}

void CountPrimes::run() {
    assert(count_primes(10) == 4);
}


