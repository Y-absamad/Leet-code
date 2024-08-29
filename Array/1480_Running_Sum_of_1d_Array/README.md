
# Running Sum of an Array

## [problem link](https://leetcode.com/problems/running-sum-of-1d-array/description/)

## Problem Description

Given an array `nums`, we define the running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`.

The goal is to return the running sum of the `nums` array.

## Implementation

```cpp
// cpp
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
};