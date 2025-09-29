#
# @lc app=leetcode id=67 lang=python
#
# [67] Add Binary
#

# @lc code=start
class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        i = len(a)-1
        j = len(b) -1
        result = []
        carry = 0
        while i >=0 or j>=0 or carry!=0:
            total = carry
            if i>=0:
                total += int(a[i])
                i-=1
            if j>=0:
                total += int(b[j])
                j-=1
            result.append(str(total%2))
            carry = total //2

        return ''.join(reversed(result))
# @lc code=end

