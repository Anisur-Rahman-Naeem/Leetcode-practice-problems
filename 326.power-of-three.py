#
# @lc app=leetcode id=326 lang=python
#
# [326] Power of Three
#

# @lc code=start
class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if(n>0):
            while(n != 1):
                if n%3 == 0:
                    n = n//3
                elif n%3 !=0:
                    return False
            return True
        else:
            return False
        
# @lc code=end

