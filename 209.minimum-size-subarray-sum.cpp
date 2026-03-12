/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int left = 0;  // start index of the sliding window
        int right = 0; // end index of the sliding window
        int sum = 0;   // sum of elements in the current window

        // Initialize minLen with a very large value
        // This ensures we can correctly track the minimum length found
        int minLen = INT_MAX;

        // Traverse the array using right pointer
        for (right = 0; right < nums.size(); right++)
        {
            sum += nums[right]; // expand the window by adding the new element

            // Shrink the window from the left as long as the sum >= target
            // This is a common confusion: shrinking is only done when sum >= target
            while (sum >= target)
            {
                // Update the minimum window length
                // Here we correctly use min() to store the smallest valid length
                minLen = min(minLen, (right - left) + 1);

                // Remove the element leaving the window and move left pointer
                sum -= nums[left];
                left++;
            }
        }

        // After the loop:
        // If minLen is still INT_MAX, no valid subarray exists → return 0
        // Otherwise, return the minimum length found
        if (minLen == INT_MAX)
        {
            return 0;
        }
        else
        {
            return minLen;
        }
    }
};
// @lc code=end
