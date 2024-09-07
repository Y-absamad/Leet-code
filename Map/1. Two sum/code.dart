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