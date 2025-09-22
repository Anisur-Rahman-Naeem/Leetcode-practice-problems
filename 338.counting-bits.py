#
# @lc app=leetcode id=338 lang=python
#
# [338] Counting Bits
#

# @lc code=start
class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        result = []
        for number in range(n+1):
            bin_conv = bin(number)
            bin_conv = bin_conv[2:]
            ones = bin_conv.count('1')
            result.append(ones)
        
        return result

# @lc code=end

