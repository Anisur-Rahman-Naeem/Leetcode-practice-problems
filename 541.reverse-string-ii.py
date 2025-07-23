#
# @lc app=leetcode id=541 lang=python
#
# [541] Reverse String II
#

# @lc code=start
class Solution(object):
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        char_list = list(s)

        for i in range(0,len(char_list),2*k):
            char_list[i:i+k] = reversed[i:i+k]
        return ''.join(char_list)
        
# @lc code=end

