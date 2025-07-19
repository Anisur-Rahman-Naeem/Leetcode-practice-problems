#
# @lc app=leetcode id=496 lang=python
#
# [496] Next Greater Element I
#

# @lc code=start
class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        ans = []
        
        for num in nums1:
            idx = nums2.index(num)
            found = False
            for j in range(idx + 1 ,len(nums2)):
                if nums2[j] > num:
                    found = True
                    ans.append(nums2[j])
                    break
            if not found:
                ans.append(-1)        
        return ans
        
# @lc code=end

