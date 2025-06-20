#
# @lc app=leetcode id=219 lang=python
#
# [219] Contains Duplicate II
#

# @lc code=start
class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        seen = {}
        for i, num in enumerate(nums):
            if num in seen and i - seen[num] <= k:
                return True
            seen[num] = i
        return False
# @lc code=end

