#
# @lc app=leetcode id=1822 lang=python
#
# [1822] Sign of the Product of an Array
#

# @lc code=start
class Solution(object):
    def arraySign(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        product = 1
        for num in nums:
            if num == 0:
                return 0
            if num < 0:
                product*=-1
        return self.signFunc(product)
    
    def signFunc(self, product):
        if product > 0:
            return 1
        elif product < 0:
            return -1
        elif product == 0:
            return 0
# @lc code=end

