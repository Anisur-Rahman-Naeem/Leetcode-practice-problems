#
# @lc app=leetcode id=2810 lang=python
#
# [2810] Faulty Keyboard
#

# @lc code=start
class Solution(object):
    def finalString(self, s):
        """
        :type s: str
        :rtype: str
        """
        result = ""
        for character in s:
            if character != "i":
                result = result+character
            elif character == "i":
                result = result[::-1]
        return result
# @lc code=end

