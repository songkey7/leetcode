//
// Created by Qi Song on 1/8/18.
//

#include "139_word_break/WordBreak.h"
#include "1_two_sum/TwoSum.h"

Base* init(){
    return new TwoSum();
}

int main(){
    return init()->run();
}