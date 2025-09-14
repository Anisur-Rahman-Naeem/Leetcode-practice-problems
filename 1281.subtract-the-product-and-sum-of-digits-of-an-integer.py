#
# @lc app=leetcode id=1281 lang=python
#
# [1281] Subtract the Product and Sum of Digits of an Integer
#

# @lc code=start
class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        prod_digits = 1
        sum_digits = 0
        for digit in str(n):
            prod_digits *= int(digit)
            sum_digits += int(digit)
        
        return prod_digits-sum_digits
# @lc code=end

