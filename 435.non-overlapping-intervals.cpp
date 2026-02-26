/*
 * @lc app=leetcode id=435 lang=cpp
 *
 * [435] Non-overlapping Intervals
 */

// @lc code=start
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        // 🔹 Edge case:
        // If there are 0 or 1 intervals,
        // they can never overlap → no removal needed.
        if(intervals.size() <= 1) return 0;

        // 🔥 CORE GREEDY STEP:
        // Sort intervals by END time (ascending).
        //
        // Why?
        // The interval that finishes earlier leaves more room
        // for future intervals → maximizes non-overlapping count.
        //
        // This transforms the problem into Activity Selection.
        sort(intervals.begin(), intervals.end(),
            [](vector<int>& a, vector<int>& b){
                return a[1] < b[1];
        });
        

        int count = 0;  

        // 🔹 prevEnd represents the end time of the LAST KEPT interval.
        //
        // Important:
        // We don't compare with intervals[i-1].
        // We compare with the last valid interval we decided to keep.
        int prevEnd = intervals[0][1];

        // 🔥 Traverse remaining intervals
        for (int i = 1; i < intervals.size(); i++)
        {
            // If current interval starts BEFORE prevEnd,
            // there is an overlap.
            //
            // We use < (not <=)
            // because touching intervals like [1,11] and [11,22]
            // are allowed (not overlapping).
            if (intervals[i][0] < prevEnd)
            {
                // Overlap detected.
                //
                // Since intervals are sorted by end,
                // current interval must have an equal or later end.
                //
                // So we remove the current one.
                // (Greedy choice: always keep the one that ends earlier.)
                count++;
            } 
            else
            {
                // No overlap.
                //
                // Safe to keep this interval.
                // Update prevEnd to reflect the newly kept interval.
                prevEnd = intervals[i][1];
            }
        }

        // 🔹 count represents the minimum number of intervals removed
        // to make the rest non-overlapping.
        return count;
    }
};
// @lc code=end