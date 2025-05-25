#
# @lc app=leetcode id=350 lang=python
#
# [350] Intersection of Two Arrays II
#

# @lc code=start

from collections import Counter
class Solution(object):
    def intersect(self, nums1, nums2):

        result = []
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1map = Counter(nums1)
        nums2map = Counter(nums2)

        intersection = nums1map & nums2map

        for element, count in intersection.items():
            result.extend([element] * count)
        

        return result
        
# @lc code=end

