/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
#include<bits/stdc++.h>
#include <algorithm>

class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        // This will store the maximum index we can reach
        // from ANY index we have processed so far.
        // IMPORTANT: This is NOT the jump length from current index.
        int farthest = 0;

        // We iterate through every index.
        // This does NOT mean we are jumping step-by-step.
        // We are only checking whether index i is reachable.
        for (int i = 0; i < nums.size(); i++)
        {
            // This was one of your main confusions:
            // Why do we check this condition?
            //
            // If current index i is greater than farthest,
            // it means this index is outside our reachable range.
            //
            // That means no previous position could reach here.
            // So we are stuck.
            if (i > farthest)
            {
                return false;
            }
            
            // Another confusion you had:
            // Why don't we reduce farthest?
            //
            // Because farthest represents the BEST reach
            // from ANY index seen so far.
            //
            // i + nums[i] = maximum reach from current index
            // max(...) ensures we never lose a better reach
            // discovered earlier.
            //
            // We are expanding a boundary, not moving physically.
            farthest = max(farthest, i + nums[i]);

            // If at any point we can already reach or cross
            // the last index, we can stop early.
            //
            // This is an optimization.
            // Even if we remove this, the logic still works.
            if (farthest >= nums.size() - 1)
            {
                return true;
            }
            
        }
        
        // If loop finishes without failing,
        // it means every index was reachable.
        return true;
    }
};
// @lc code=end