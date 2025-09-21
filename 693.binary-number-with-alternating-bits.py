#
# @lc app=leetcode id=693 lang=python
#
# [693] Binary Number with Alternating Bits
#

# @lc code=start
class Solution(object):
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        isAlternate = True
        bin_convert = bin(n)
        bin_convert = bin_convert[2:]
        for index in range(len(bin_convert)-1):
            if bin_convert[index] == bin_convert[index + 1]:
                isAlternate = False
                return isAlternate
        
        return isAlternate
        
# @lc code=end

