#
# @lc app=leetcode id=1047 lang=python
#
# [1047] Remove All Adjacent Duplicates In String
#

# @lc code=start
class Solution(object):
    def removeDuplicates(self, s):
        """
        :type s: str
        :rtype: str
        """
        result = []
        for character in s:
            if result:
                if (result[-1] == character):
                    result.pop()
                elif (result[-1] != character):
                    result.append(character)
            else:
                result.append(character)
        result_string = "".join(result)
        return result_string
        
# @lc code=end

