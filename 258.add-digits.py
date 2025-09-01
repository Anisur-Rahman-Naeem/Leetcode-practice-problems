#
# @lc app=leetcode id=258 lang=python
#
# [258] Add Digits
#

# @lc code=start
class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        result = 0
        str_num = str(num)
        while len(str_num) !=1 :
            list_str_num = list(str_num)

            for index in range(len(list_str_num)):
                result = result+int(list_str_num[index])

            str_num = str(result)
            result = 0
        return int(str_num)
# @lc code=end

