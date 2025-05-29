#
# @lc app=leetcode id=645 lang=python
#
# [645] Set Mismatch
#

# @lc code=start
from collections import Counter
class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        counter = Counter(nums)
        duplicate = missing = -1
        for i, value in enumerate(nums, start=1):
            if counter[i] == 2:
                duplicate = i
            elif counter[i] == 0:
                missing = i
        return [duplicate, missing]
            
# @lc code=end

