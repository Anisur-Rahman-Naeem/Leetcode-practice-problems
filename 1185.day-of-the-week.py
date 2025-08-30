#
# @lc app=leetcode id=1185 lang=python
#
# [1185] Day of the Week
#

# @lc code=start0
import calendar
class Solution(object):
    def dayOfTheWeek(self, day, month, year):
        """
        :type day: int
        :type month: int
        :type year: int
        :rtype: str
        """
        day_number = calendar.weekday(year,month,day)
        day_names = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
        week_day = day_names[day_number]

        return week_day
        
# @lc code=end

