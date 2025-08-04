class Solution(object):
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        result = ""
        negative = num < 0
        num = abs(num)

        if num == 0:
            return "0"

        while num != 0:
            remainder = num%7
            num = num//7
            result = result+str(remainder)

        if negative:
            result = result + "-"
        result = result[::-1]

        return result
        