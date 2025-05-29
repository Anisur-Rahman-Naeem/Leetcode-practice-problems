#
# @lc app=leetcode id=1365 lang=python
#
# [1365] How Many Numbers Are Smaller Than the Current Number
#

# @lc code=start
class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        result = []
        data = {}
        sortedNums = sorted(nums)

        for i, value in enumerate(sortedNums):
            if value not in data:
                data[value] = i

        for element in nums:
            result.append(data[element])

        return result

        
# @lc code=end

