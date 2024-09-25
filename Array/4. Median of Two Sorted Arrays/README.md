# 4. Median of Two Sorted Arrays

## [Leetcode Link](https://leetcode.com/problems/median-of-two-sorted-arrays/description/)

## Problem Description

Given two sorted arrays `nums1` and `nums2` of size m and n respectively, return `the median` of the two sorted arrays.

The overall run time complexity should be `O(log (m+n))`.

```cpp
//cpp
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sum;
        int index1, index2;
        index1 = index2 = 0;

        while (index1 < nums1.size() && index2 < nums2.size()) {
            if (nums1[index1] < nums2[index2])
                sum.push_back(nums1[index1++]);
            else
                sum.push_back(nums2[index2++]);
        }

        while (index1 < nums1.size()) sum.push_back(nums1[index1++]);
        while (index2 < nums2.size()) sum.push_back(nums2[index2++]);
        
        if (sum.size() % 2 == 0)
            return double(sum[sum.size() / 2] + double(sum[(sum.size() / 2) - 1])) / 2;
        else
            return sum[(sum.size() / 2)];
    }
};
```

```dart
//dart
class Solution {
  double findMedianSortedArrays(List<int> nums1, List<int> nums2) {
    List<int> sum = [];

    int index1, index2;
    index1 = index2 = 0;
    while (index1 < nums1.length && index2 < nums2.length) {
      if (nums1[index1] < nums2[index2])
        sum.add(nums1[index1++]);
      else
        sum.add(nums2[index2++]);
    }
    
    while (index1 < nums1.length) sum.add(nums1[index1++]);
    while (index2 < nums2.length) sum.add(nums2[index2++]);

    if (sum.length % 2 == 0)
      return (sum[sum.length ~/ 2] + (sum[(sum.length ~/ 2) - 1])) / 2;
    else
      return sum[(sum.length ~/ 2)].toDouble();
  }
}
```