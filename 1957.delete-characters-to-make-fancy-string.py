#
# @lc app=leetcode id=1957 lang=python
#
# [1957] Delete Characters to Make Fancy String
#

# @lc code=start
class Solution(object):
    def makeFancyString(self, s):
        """
        :type s: str
        :rtype: str
        """
        result = []
        for index in range(len(s)):
            if index > 0 and index < len(s) -1:
                
                if s[index-1] != s[index] == s[index+1]:
                    result.append(s[index])

                elif s[index-1] == s[index] != s[index +1]:
                    result.append(s[index])

                elif s[index-1] != s[index] != s[index +1]:
                    result.append(s[index])

                elif index == (len(s)-1):
                    result.append(s[index])

                else:
                    continue

            elif index == 0 or index == len(s) -1:
                result.append(s[index])

        return "".join(result)
        
# @lc code=end

