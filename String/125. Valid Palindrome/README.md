# 125. Valid Palindrome

## [Leetcode link](https://leetcode.com/problems/valid-palindrome/)

## Problem Description 

A phrase is a **palindrome** if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` if it is a **palindrome**, or `false` otherwise.

## Implementation

```dart
//dart

class Solution {
  bool isPalindrome(String s) {
    bool isPalindrome = true;
    int left = 0;
    int right = s.length - 1;
    String convertedString = "";
    convertedString = s.toLowerCase();
    while (left < right) {
      if (isNotAlphaNumeric(convertedString[left])) {
        left++;
        continue;
      }

      if (isNotAlphaNumeric(convertedString[right])) {
        right--;
        continue;
      }

      if (convertedString[left] != convertedString[right]) {
        return false;
      }

      left++;
      right--;
    }

    return isPalindrome;
  }

  bool isNotAlphaNumeric(String c) {
    return ((c.codeUnitAt(0) < 48 || c.codeUnitAt(0) > 57)) &&
        ((c.codeUnitAt(0) < 97 || c.codeUnitAt(0) > 122));
  }
}
```

