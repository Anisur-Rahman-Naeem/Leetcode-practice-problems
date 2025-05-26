#
# @lc app=leetcode id=1232 lang=python
#
# [1232] Check If It Is a Straight Line
#

# @lc code=start
class Solution(object):
    def checkStraightLine(self, coordinates):
        """
        :type coordinates: List[List[int]]
        :rtype: bool
        """
        x0,y0 = coordinates[0]
        x1,y1 = coordinates[1]

        for i in range(2, len(coordinates)):
            x, y = coordinates[i]

            if ((y1 - y0) * (x - x0)) != ((y - y0) * (x1 - x0)):
                return False
            
        return True
        
# @lc code=end

