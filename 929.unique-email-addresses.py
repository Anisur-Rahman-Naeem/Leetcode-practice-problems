#
# @lc app=leetcode id=929 lang=python
#
# [929] Unique Email Addresses
#

# @lc code=start
class Solution(object):
    def numUniqueEmails(self, emails):
        validEmailList = set()
        for email in emails:
            local, domain = email.split("@")
            local = local.replace(".", "")
            local = local.split("+")[0]
            normailized_email = local + '@' + domain
            validEmailList.add(normailized_email)
        return len(validEmailList)
# @lc code=end