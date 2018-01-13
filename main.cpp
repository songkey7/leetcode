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
#include "141.linked_list_cycle/LinkedListCycle.h"
#include "142.linked_list_cycle_2/LinkedListCycle2.h"
#include "148.sort_list/SortList.h"
#include "152.maximum_product_subarray/MaximumProductSubarray.h"
#include "53.maximum_subarray/MaximumSubarray.h"
#include "394.decode_string/DecodeString.h"
#include "347.top_k_frequent_elements/TopKFrequentElements.h"
#include "581.shortest_unsorted_continuous_subarray/ShortestUnsortedContinuousSubarray.h"
#include "461.hamming_distance/HammingDistance.h"
#include "338.counting_bits/CountingBits.h"
#include "448.find_disappeared_numbers/FindDisappearedNumbers.h"
#include "438.find_anagrams/FindAnagrams.h"

Base* init(){
    return new FindAnagrams();
    //return new FindDisappearedNumbers();
    //return new CountingBits();
    //return new HammingDistance();
    //return new ShortestUnsortedContinuousSubarray();
    //return new TopKFrequentElements();
    //return new DecodeString();
    //return new MaximumProductSubarray();
    //return new MaximumSubarray();
    //return new SortList();
    //return new LinkedListCycle2();
    //return new LinkedListCycle();
    //return new MergeTwoBinaryTrees();
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