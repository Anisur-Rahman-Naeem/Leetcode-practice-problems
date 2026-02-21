/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        
        // farthest → the maximum index we can reach
        // while scanning the current "layer"
        int farthest = 0;

        // jumps → number of jumps taken so far
        int jumps = 0;

        // currentEnd → end of the range covered
        // using the current number of jumps
        // This is what controls when a jump finishes.
        int currentEnd = 0;

        // IMPORTANT:
        // We are NOT jumping step by step.
        // We are scanning indices and expanding reach.
        //
        // Conceptually, this works like BFS levels:
        // All indices between previous currentEnd
        // and this currentEnd belong to the same jump.
        for (int i = 0; i < nums.size() -1; i++)
        {
            // Update the maximum reach from all indices
            // inside the current jump range.
            //
            // This was one of your earlier confusions:
            // Why don’t we reduce farthest?
            //
            // Because farthest stores the BEST possible reach
            // discovered so far inside this layer.
            // We are collecting the best next boundary.
            farthest = max(farthest, i + nums[i]);

            // When we reach the boundary of the current jump,
            // it means:
            //
            // - We have finished exploring all positions
            //   reachable using the current number of jumps.
            //
            // - Now we MUST take another jump.
            //
            // So we increment jumps.
            if (i == currentEnd)
            {
                jumps++;

                // Move the boundary to the best possible reach
                // discovered in this layer.
                //
                // This defines the next layer.
                currentEnd = farthest;
            }

            // Notice:
            // We do NOT early return here.
            //
            // Earlier you tried early return when
            // farthest >= last index,
            // but that caused undercounting because
            // the layer was not fully completed yet.
        }

        // After finishing traversal,
        // jumps contains the minimum jumps required.
        return jumps;
    }
};
// @lc code=end