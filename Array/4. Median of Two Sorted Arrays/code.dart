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