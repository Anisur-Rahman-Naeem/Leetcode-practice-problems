#
# @lc app=leetcode id=796 lang=python
#
# [796] Rotate String
#

# @lc code=start
class Solution(object):
    def rotateString(self, s, goal):
        """
        :type s: str
        :type goal: str
        :rtype: bool
        """
        if len(s) == len(goal):
            if goal in (s + s):
                return True
            else:
                return False
        
# @lc code=end

