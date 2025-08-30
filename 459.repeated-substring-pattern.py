#
# @lc app=leetcode id=459 lang=python
#
# [459] Repeated Substring Pattern
#

# @lc code=start
class Solution(object):
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        n = len(s)
        for divisor in range(len(n)):
            if n % divisor == 0:
                candidate = s[:divisor]
                if candidate * (n // divisor) == s:
                    return candidate
        return ""
# @lc code=end

