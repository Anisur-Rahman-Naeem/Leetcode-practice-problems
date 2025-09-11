#
# @lc app=leetcode id=507 lang=python
#
# [507] Perfect Number
#


# @lc code=start
import math
class Solution(object):
    def checkPerfectNumber(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num == 1: #handling if input is 1
            return False
        sum = 1
        for number in range(2,int(math.sqrt(num)) +1):
            if num % number == 0:
                sum += number
                if number != (num // number): #making sure that iterator "number" is not equal to the "result of num/number"
                    sum += (num // number)
        return sum == num


# @lc code=end
