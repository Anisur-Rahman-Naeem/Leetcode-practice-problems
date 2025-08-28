#
# @lc app=leetcode id=263 lang=python
#
# [263] Ugly Number
#

# @lc code=start
class Solution(object):
    def isUgly(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n > 0:
            for p in [2,3,5]:
                while(n % p == 0):
                    n//=p
            return n == 1
        else:
            return False
# @lc code=end

