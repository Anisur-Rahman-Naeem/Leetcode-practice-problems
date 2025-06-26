#
# @lc app=leetcode id=1816 lang=python
#
# [1816] Truncate Sentence
#

# @lc code=start
class Solution(object):
    def truncateSentence(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        s = s.split(" ")
        s = s[:k-1]
        return " ".join(s)
        
# @lc code=end

