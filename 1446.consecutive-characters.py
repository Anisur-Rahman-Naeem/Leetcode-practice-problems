#
# @lc app=leetcode id=1446 lang=python
#
# [1446] Consecutive Characters
#

# @lc code=start
class Solution(object):
    def maxPower(self, s):
        """
        :type s: str
        :rtype: int
        """
        finalcount = 1
        tempCount = 1
        for characters in range(len(s)):
            if characters > 0:
                if s[characters] == s[characters - 1]:
                    tempCount = tempCount + 1
                    if tempCount > finalcount:
                        finalcount = tempCount
                else:
                    tempCount = 1
        return finalcount
        
# @lc code=end

