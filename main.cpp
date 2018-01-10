//
// Created by Qi Song on 1/8/18.
//

#include "1.two_sum/TwoSum.h"
#include "139.word_break/WordBreak.h"
#include "647.palindromic_substrings/PalindromicSubstrings.h"
#include "621.task_scheduler/TaskScheduler.h"
#include "560.subarray_sum_equals_k/SubarraySumEqualsK.h"
#include "547.friend_circles/FriendCircles.h"
#include "494.target_sum/TargetSum.h"
#include "416.partition_equal_subset_sum/PartitionEqualSubsetSum.h"
#include "617.merge_two_binary_trees/MergeTwoBinaryTrees.h"

Base* init(){
    return new MergeTwoBinaryTrees();
    //return new PartitionEqualSubsetSum();
    //return new TargetSum();
    //return new FriendCircles();
    //return new SubarraySumEqualsK();
    //return new TaskScheduler();
    //return new PalindromicSubstrings();
    //return new TwoSum();
    //return new WordBreak();
}

int main(){
    init()->run();
    return 0;
}