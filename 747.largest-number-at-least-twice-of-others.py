#
# @lc app=leetcode id=747 lang=python
#
# [747] Largest Number At Least Twice of Others
#

# @lc code=start
class Solution(object):
    def dominantIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        largest = max(nums)
        largest_index = nums.index(largest)

        for i in range(len(nums)):
            if i != largest_index and largest < 2 * nums[i]:
                return -1
        return largest_index
        
# @lc code=end

