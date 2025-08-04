#
# @lc app=leetcode id=917 lang=python
#
# [917] Reverse Only Letters
#

# @lc code=start
import re
class Solution(object):
    def reverseOnlyLetters(self, s):
        """
        :type s: str
        :rtype: str
        """
        letters = [c for c in s if c.isalpha()]

        result = []

        for char in s:
            if char.isalpha():
                result.append(letters.pop())
            else:
                result.append(char)

        return ''.join(result)

        
# @lc code=end

