#
# @lc app=leetcode id=557 lang=python
#
# [557] Reverse Words in a String III
#

# @lc code=start
class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        list_s = s.split()
        for i in range(len(list_s)):
            list_s[i] = list_s[i][::-1]

        return " ".join(list_s)
# @lc code=end

