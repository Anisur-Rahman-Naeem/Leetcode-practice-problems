#
# @lc app=leetcode id=1903 lang=python
#
# [1903] Largest Odd Number in String
#

# @lc code=start
class Solution(object):
    def largestOddNumber(self, num):
        """
        :type num: str
        :rtype: str
        """
        if (num != None) or (num != "") :
            convertedNumber = int(num)

            for index in range(len(num)):
                if convertedNumber %2 == 0:
                    convertedNumber = convertedNumber //10

                elif convertedNumber %2 != 0:
                    convertedNumber = str(convertedNumber)

                    return convertedNumber
                
        return ""
# @lc code=end

