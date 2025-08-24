#
# @lc app=leetcode id=3210 lang=python
#
# [3210] Find the Encrypted String
#

# @lc code=start
class Solution(object):
    def getEncryptedString(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        n = len(s)
        k%=n
        return s[k:] + s[:k]
        
# @lc code=end

