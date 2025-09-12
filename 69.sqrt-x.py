#
# @lc app=leetcode id=69 lang=python
#
# [69] Sqrt(x)
#

# @lc code=start
from math import floor
class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        sqrt_num = x ** 0.5
        return int(floor(sqrt_num))
        
# @lc code=end

