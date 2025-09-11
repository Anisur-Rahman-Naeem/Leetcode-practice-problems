#
# @lc app=leetcode id=190 lang=python
#
# [190] Reverse Bits
#

# @lc code=start
class Solution(object):
    def reverseBits(self, n):
        """
        :type n: int
        :rtype: int
        """
        binary_str_n = bin(n)[2:]
        binary_str_n = binary_str_n.zfill(32)
        reverse = binary_str_n[::-1]
        return int(reverse,2)
# @lc code=end

