//
// Created by Qi Song on 26/03/2018.
//

#include "FizzBuzz.h"

vector<string> FizzBuzz::fizz_buzz(int n) {
    vector<string> ret(n);
    for(int i = 1; i <= n; i++){
        if(i % 15 == 0){
            ret[i-1] = "FizzBuzz";
        } else if(i % 5 == 0){
            ret[i-1] = "Buzz";
        } else if(i % 3 == 0){
            ret[i-1] = "Fizz";
        } else{
            ret[i-1] = itoa(i);
        }
    }
    return ret;
}

void FizzBuzz::run() {
    vector<string> ret = {"1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"};
    assert(fizz_buzz(15) == ret);
}

string FizzBuzz::itoa(int i) {
    string ret;
    while(i){
        char tmp = i % 10 + '0';
        ret = tmp + ret;
        i /= 10;
    }
    return ret;
}
