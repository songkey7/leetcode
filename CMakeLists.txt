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
        142.linked_list_cycle_2/LinkedListCycle2.cpp 142.linked_list_cycle_2/LinkedListCycle2.h)
