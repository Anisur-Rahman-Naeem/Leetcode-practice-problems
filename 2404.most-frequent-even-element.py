#
# @lc app=leetcode id=2404 lang=python
#
# [2404] Most Frequent Even Element
#

# @lc code=start
class Solution(object):
    def mostFrequentEven(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        freq_numbers = {}

        for num in nums:
            if num %2 == 0:
                freq_numbers[num] = freq_numbers.get(num, 0) + 1

        if not freq_numbers:
            return -1
        
        max_freq = -1
        result = -1

        for num, freq in freq_numbers.items():
            if freq> max_freq:
                max_freq = freq
                result = num
            elif freq == max_freq:
                result = min(result, num)

        return result
        
# @lc code=end

