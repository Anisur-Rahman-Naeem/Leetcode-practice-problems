#
# @lc app=leetcode id=888 lang=python
#
# [888] Fair Candy Swap
#

# @lc code=start
class Solution(object):
    def fairCandySwap(self, aliceSizes, bobSizes):
        """
        :type aliceSizes: List[int]
        :type bobSizes: List[int]
        :rtype: List[int]
        """
        sumA= sum(aliceSizes)
        sumB = sum(bobSizes)
        diff_value = (sumB-sumA)//2

        for alice in aliceSizes:
            bob = alice + diff_value
            if bob >0 and bob in bobSizes :
                return [alice, bob]

# @lc code=end

