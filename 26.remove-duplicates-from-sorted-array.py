#
# @lc app=leetcode id=26 lang=python
#
# [26] Remove Duplicates from Sorted Array
#

# @lc code=start
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = 1

        for r in range(1, len(nums)):
            if(nums[r] != nums[r - 1]):
                nums[l] = nums[r]
                l += 1

        return l

# @lc code=end

