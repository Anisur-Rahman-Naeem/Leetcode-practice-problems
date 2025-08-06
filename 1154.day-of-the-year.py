#
# @lc app=leetcode id=1154 lang=python
#
# [1154] Day of the Year
#

# @lc code=start
from datetime import datetime
class Solution(object):
    def dayOfYear(self, date):
        """
        :type date: str
        :rtype: int
        """
        dt = datetime.strptime(date,"%Y-%m-%d")
        return dt.timetuple().tm_yday
        
# @lc code=end

