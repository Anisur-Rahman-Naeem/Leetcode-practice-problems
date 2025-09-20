#
# @lc app=leetcode id=374 lang=python
#
# [374] Guess Number Higher or Lower
#

# @lc code=start
# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num):

class Solution(object):
    def guessNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        value = 5 
        left = 1
        right = n

        if n == 1:
            value = guess(n)
            if value == 0:
                return 1

        while left <= right :
            mid = (left + right)//2
            value = guess(mid)
            if value == -1:
                right = mid - 1
            elif value == 1:
                left = mid + 1
            elif value == 0:
                return mid
# @lc code=end

