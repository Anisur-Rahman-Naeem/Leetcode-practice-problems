/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        vector<vector<int>> result;   // To store the final merged intervals
        bool inserted = false;         // Flag to ensure newInterval is inserted only once

        // Iterate through all existing intervals
        for (int i = 0; i < intervals.size(); i++)
        {
            // Case 1: Current interval ends before newInterval starts → no overlap
            // We can safely push current interval into result
            if (intervals[i][1] < newInterval[0])
            {
                result.push_back(intervals[i]);
            }
            // Case 2: Current interval starts after newInterval ends → no overlap
            // Time to insert newInterval before current interval
            else if (newInterval[1] < intervals[i][0])
            {
                // Insert newInterval only once
                if (!inserted)
                {
                    result.push_back(newInterval); // Place merged/new interval at correct position
                    inserted = true;               // Mark as inserted
                }
                // Push the current interval after newInterval
                result.push_back(intervals[i]);
            }
            // Case 3: Overlapping intervals → merge them
            else
            {
                // Merge current interval with newInterval
                // Update the bounds of newInterval to include current interval
                // This is the core of the merging logic
                newInterval[0] = min(intervals[i][0], newInterval[0]); // Start = earliest of two starts
                newInterval[1] = max(intervals[i][1], newInterval[1]); // End = latest of two ends
            }
        }

        // If newInterval was never inserted (e.g., belongs at the very end)
        // Push it into result now
        if (!inserted)
        {
            result.push_back(newInterval);
        }

        return result; // Return merged intervals
    }
};
// @lc code=end