#
# @lc app=leetcode id=202 lang=python
#
# [202] Happy Number
#

# @lc code=start
class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        seen = set()
        while(n !=1 and n not in seen):
            seen.add(n)
            n = sum(int(digit)**2 for digit in str(n))

        return n == 1
# @lc code=end

