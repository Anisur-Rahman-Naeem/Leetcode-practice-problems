#
# @lc app=leetcode id=1556 lang=python
#
# [1556] Thousand Separator
#

# @lc code=start
class Solution(object):
    def thousandSeparator(self, n):
        """
        :type n: int
        :rtype: str
        """
        count = 0
        n = str(n)
        result = ""
        for index in range(len(n) -1, -1,-1):
            result = n[index] + result
            count += 1
            if count == 3 and index!= 0:
                result = "." + result
                count = 0
        return result
# @lc code=end

