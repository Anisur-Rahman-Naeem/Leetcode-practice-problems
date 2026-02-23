/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // Step 1: Sort intervals based on starting time.
        // This ensures overlapping intervals appear next to each other.
        sort(intervals.begin(), intervals.end());

        // This vector will store the final merged intervals.
        vector<vector<int>> result;

        // Step 2: Push the first interval as the initial merged interval.
        result.push_back(intervals[0]);

        // Step 3: Traverse the remaining intervals.
        for (int i = 1; i < intervals.size(); i++)
        {
            // If current interval overlaps with the last merged interval
            // Overlap condition (closed intervals):
            // current.start <= lastMerged.end
            if (intervals[i][0] <= result.back()[1])
            {
                // Merge the intervals by updating the end of
                // the last interval in result.
                // We take the maximum end to ensure full coverage.
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            }
            else
            {
                // If there is no overlap,
                // simply add the current interval as a new block.
                result.push_back(intervals[i]);
            }
        }

        // Step 4: Return all merged intervals.
        return result;
    }
};
// @lc code=end