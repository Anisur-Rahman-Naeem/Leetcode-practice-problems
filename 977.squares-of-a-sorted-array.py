#
# @lc app=leetcode id=977 lang=python
#
# [977] Squares of a Sorted Array
#

# @lc code=start
class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        result = []

        for num in nums:
            squared = num * num
            result.append(squared)

        result.sort()
        return result
        
# @lc code=end

