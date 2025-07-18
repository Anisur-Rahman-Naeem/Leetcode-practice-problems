#
# @lc app=leetcode id=1475 lang=python
#
# [1475] Final Prices With a Special Discount in a Shop
#

# @lc code=start
class Solution(object):
    def finalPrices(self, prices):
        """
        :type prices: List[int]
        :rtype: List[int]
        """
        result = []
        for index_i in range(len(prices)):
            discount = 0
            for index_j in range(index_i +1, len(prices)):

                if (prices[index_j] <= prices[index_i]):

                    discount = prices[index_j]
                    break

            result.append(prices[index_i] - discount)
        return result
        
# @lc code=end

