//
// Created by Qi Song on 1/8/18.
//

#include "139_word_break/WordBreak.h"
#include "1_two_sum/TwoSum.h"
#include "647_palindromic_substrings/PalindromicSubstrings.h"
#include "621_task_scheduler/TaskScheduler.h"

Base* init(){
    //return new TaskScheduler();
    return new PalindromicSubstrings();
    //return new TwoSum();
    //return new WordBreak();
}

int main(){
    return init()->run();
}