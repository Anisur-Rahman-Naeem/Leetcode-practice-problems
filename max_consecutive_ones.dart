import 'dart:math';

class Solution {
  int findMaxConsecutiveOnes(List<int> nums) {
    int maxConsecutiveTracker = 0;
    int maxConsecutive = 0;
    for(var element in nums){
        if (element == 1){
            maxConsecutiveTracker++;
            maxConsecutive = max(maxConsecutiveTracker, maxConsecutive);
        }else{
            maxConsecutiveTracker = 0;
        }
    }
    return maxConsecutive;
  }
}