#
# @lc app=leetcode id=3507 lang=python
#
# [3507] Minimum Pair Removal to Sort Array I
#

# @lc code=start
class Solution(object):
    def minimumPairRemoval(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        result = 0
        first = 0
        second = 1

        while second != len(nums):
            if result == 0:
                result = nums[first] + nums[second]
            else:
                if (first + second) < result:
                    result = (first + second)
        
# @lc code=end

