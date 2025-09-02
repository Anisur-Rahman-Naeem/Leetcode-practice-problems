#
# @lc app=leetcode id=1512 lang=python
#
# [1512] Number of Good Pairs
#

# @lc code=start
from collections import Counter
class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        frequency = Counter(nums)
        sum = 0

        for num in frequency.values():
            sum+=num * (num - 1) // 2
        return sum
# @lc code=end

