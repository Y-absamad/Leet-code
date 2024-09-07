# 1. Two Sum

## [Leetcode link](https://leetcode.com/problems/two-sum/description/)


## Description
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.

You can return the answer in any order.



# Code
```dart []
class Solution {
  List<int> twoSum(List<int> nums, int target) {
    Map<int,int> twonums = {} ;
    for(int i = 0 ; i < nums.length ; i++){
        int complement = target - nums[i];
        if(twonums.containsKey(complement))
            return[twonums[complement]! , i];
        twonums[nums[i]] = i;
    }
    return [];
  }
}
```