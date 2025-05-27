#
# @lc app=leetcode id=2032 lang=python
#
# [2032] Two Out of Three
#

# @lc code=start
class Solution(object):
    def twoOutOfThree(self, nums1, nums2, nums3):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :type nums3: List[int]
        :rtype: List[int]
        """

        count = set()

        for element in nums1:
            if (element in nums2) or (element in nums3):
                if (len(count)!=2) or (len(count)!=3):
                    count.add(element)

        if (len(count)!=2) or (len(count)!=3):
            for element in nums2:
                if (element in nums1) or (element in nums3):
                    if (len(count)!=2) or (len(count)!=3):
                        count.add(element)

        countList = list(count)
        return countList

    
        
# @lc code=end

