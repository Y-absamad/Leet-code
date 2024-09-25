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