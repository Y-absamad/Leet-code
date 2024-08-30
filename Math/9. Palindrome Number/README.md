# 9. Palindrome Number

## [Leetcode link](https://leetcode.com/problems/palindrome-number/description/)

## Problem Description 

Given an integer `x`, return `true` if `x` is a **palindrome**, and `false` otherwise.

## Implementation

```dart
// dart
class Solution {
  bool isPalindrome(int x) {
    int reminder = 0;
    int reverse = 0;
    int num = x;

    while (x > 0) {
      reminder = x % 10;
      reverse = reverse * 10 + reminder;
      x = x ~/ 10;
    }
    return reverse == num;
  }
}
```
