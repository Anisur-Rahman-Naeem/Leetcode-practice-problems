#
# @lc app=leetcode id=1550 lang=python
#
# [1550] Three Consecutive Odds
#

# @lc code=start
class Solution(object):
    def threeConsecutiveOdds(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        count = 0
        for num in arr:
            if num %2 != 0:
                count = count +1
                if count == 3:
                    return True
            else:
                count = 0
        
        return False
        
# @lc code=end

