#
# @lc app=leetcode id=2351 lang=python
#
# [2351] First Letter to Appear Twice
#

# @lc code=start
class Solution(object):
    def repeatedCharacter(self, s):
        """
        :type s: str
        :rtype: str
        """
        repeat = {}
        for index in range(len(s)):
            if s[index] in repeat:
                return s[index]
            else:
                repeat[s[index]] = 1
# @lc code=end

