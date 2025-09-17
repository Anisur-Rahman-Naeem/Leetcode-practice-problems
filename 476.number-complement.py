#
# @lc app=leetcode id=476 lang=python
#
# [476] Number Complement
#

# @lc code=start
class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        bin_num = bin(num)[2:]
        reversed_bin = ''
        for num in bin_num:
            if num == '1':
                reversed_bin+='0'
            elif num == '0':
                reversed_bin+='1'
        reversed_num = int(reversed_bin,base=2)
        return reversed_num
# @lc code=end

