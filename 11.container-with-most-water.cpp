/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        // Two pointer approach:
        // left starts at the beginning of the array
        // right starts at the end of the array
        int left = 0;
        int right = height.size() - 1;

        // This variable will store the maximum area found so far
        int area = 0;

        // Continue until the two pointers meet
        // When left == right, only one pillar remains,
        // so a container cannot be formed anymore
        while (left < right)
        {
            // The height of water is limited by the shorter pillar
            // because water would spill from the shorter side
            int length = min(height[left], height[right]);

            // Distance between the two pillars
            int distance = right - left;

            // Calculate area = height * width
            // If this area is larger than previous maximum, update it
            if ((length * distance) > area)
            {
                area = length * distance;
            }

            // Important decision step:
            // Move the pointer which has the smaller height

            // Reason:
            // The smaller height is limiting the water level.
            // Moving the taller one will not increase the water height,
            // but moving the shorter one might find a taller pillar.
            if (height[left] < height[right])
            {
                left++;   // move left pointer inward
            }
            else
            {
                right--;  // move right pointer inward
            }
        }

        // After checking all possible useful pairs,
        // return the maximum water area found
        return area;
    }
};
// @lc code=end