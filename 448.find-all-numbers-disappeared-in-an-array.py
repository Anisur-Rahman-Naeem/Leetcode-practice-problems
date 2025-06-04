# -4, -3, -2, -7, 8, 2, -3, -1
class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        result = []

        for num in nums:
            index = abs(num) -1
            nums[index] = abs(nums[index]) * -1

        for i in range(len(nums)):
            if nums[i] > 0:
                result.append(i + 1)

        return result
        
# @lc code=end

