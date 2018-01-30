cmake_minimum_required(VERSION 3.9)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)

add_executable(leetcode main.cpp Base.h
        139.word_break/WordBreak.cpp 139.word_break/WordBreak.h
        1.two_sum/TwoSum.cpp 1.two_sum/TwoSum.h
        647.palindromic_substrings/PalindromicSubstrings.cpp 647.palindromic_substrings/PalindromicSubstrings.h
        621.task_scheduler/TaskScheduler.cpp 621.task_scheduler/TaskScheduler.h
        560.subarray_sum_equals_k/SubarraySumEqualsK.cpp 560.subarray_sum_equals_k/SubarraySumEqualsK.h
        547.friend_circles/FriendCircles.cpp 547.friend_circles/FriendCircles.h
        494.target_sum/TargetSum.cpp 494.target_sum/TargetSum.h
        416.partition_equal_subset_sum/PartitionEqualSubsetSum.cpp 416.partition_equal_subset_sum/PartitionEqualSubsetSum.h
        617.merge_two_binary_trees/MergeTwoBinaryTrees.cpp 617.merge_two_binary_trees/MergeTwoBinaryTrees.h
        141.linked_list_cycle/LinkedListCycle.cpp 141.linked_list_cycle/LinkedListCycle.h
        142.linked_list_cycle_2/LinkedListCycle2.cpp 142.linked_list_cycle_2/LinkedListCycle2.h
        148.sort_list/SortList.cpp 148.sort_list/SortList.h
        152.maximum_product_subarray/MaximumProductSubarray.cpp 152.maximum_product_subarray/MaximumProductSubarray.h
        53.maximum_subarray/MaximumSubarray.cpp 53.maximum_subarray/MaximumSubarray.h
        394.decode_string/DecodeString.cpp 394.decode_string/DecodeString.h
        347.top_k_frequent_elements/TopKFrequentElements.cpp 347.top_k_frequent_elements/TopKFrequentElements.h
        581.shortest_unsorted_continuous_subarray/ShortestUnsortedContinuousSubarray.cpp
        581.shortest_unsorted_continuous_subarray/ShortestUnsortedContinuousSubarray.h
        461.hamming_distance/HammingDistance.cpp 461.hamming_distance/HammingDistance.h
        338.counting_bits/CountingBits.cpp 338.counting_bits/CountingBits.h
        448.find_disappeared_numbers/FindDisappearedNumbers.cpp 448.find_disappeared_numbers/FindDisappearedNumbers.h
        438.find_anagrams/FindAnagrams.cpp 438.find_anagrams/FindAnagrams.h
        112.path_sum/PathSum.cpp 112.path_sum/PathSum.h
        113.path_sum_2/PathSum2.cpp 113.path_sum_2/PathSum2.h
        437.path_sum_3/PathSum3.cpp 437.path_sum_3/PathSum3.h
        21.merge_2_sorted_lists/Merge2SortedLists.cpp 21.merge_2_sorted_lists/Merge2SortedLists.h
        23.merge_k_sorted_lists/MergeKSortedLists.cpp 23.merge_k_sorted_lists/MergeKSortedLists.h
        155.min_stack/MinStack.cpp 155.min_stack/MinStack.h
        225.implement_stack_using_queues/ImplementStackUsingQueues.cpp 225.implement_stack_using_queues/ImplementStackUsingQueues.h
        232.implement_queue_using_stacks/ImplementQueueUsingStacks.cpp 232.implement_queue_using_stacks/ImplementQueueUsingStacks.h
        198.house_robber/HouseRobber.cpp 198.house_robber/HouseRobber.h
        213.house_robber_2/HouseRobber2.cpp 213.house_robber_2/HouseRobber2.h
        337.house_robber_3/HouseRobber3.cpp 337.house_robber_3/HouseRobber3.h
        )
