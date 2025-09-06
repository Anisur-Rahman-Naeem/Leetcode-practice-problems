#
# @lc app=leetcode id=13 lang=python
#
# [13] Roman to Integer
#

# @lc code=start
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman_numbers = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        result = 0
        for index in range(len(s)):
            if index != len(s)-1:
                if roman_numbers[s[index]] < roman_numbers[s[index+1]]:
                    result -= roman_numbers[s[index]]
                else:
                    result += roman_numbers[s[index]]
            else:
                result += roman_numbers[s[index]]
        
        return result
# @lc code=end

