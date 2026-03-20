/*
 * @lc app=leetcode id=718 lang=cpp
 *
 * [718] Maximum Length of Repeated Subarray
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        int ans = 0; // Stores the maximum length of common subarray found
        
        // =========================
        // 🔵 Phase 1: Slide nums2 over nums1
        // =========================
        // We fix nums2 starting at index 0
        // and move nums1's starting point from 0 → n-1
        for (int start = 0; start < n; start++)
        {
            int i = start; // pointer in nums1
            int j = 0;     // pointer in nums2
            int streak = 0; // length of current matching subarray
            
            // Traverse overlapping region
            while (i < n && j < m)
            {
                if (nums1[i] == nums2[j])
                {
                    // Elements match → extend current subarray
                    streak++;
                    ans = max(ans, streak); // update global answer
                } 
                else
                {
                    // ❗ mismatch → contiguous subarray breaks
                    streak = 0;
                }

                // Move diagonally (both pointers forward)
                i++;
                j++;
            }
        }
        
        // =========================
        // 🔵 Phase 2: Slide nums1 over nums2
        // =========================
        // Now fix nums1 at index 0
        // and move nums2's starting point from 0 → m-1
        for (int start = 0; start < m; start++)
        {
            int i = 0;      // pointer in nums1
            int j = start;  // pointer in nums2
            int streak = 0; // reset streak for new alignment
            
            // Traverse overlapping region
            while (i < n && j < m)
            {
                if (nums1[i] == nums2[j])
                {
                    // Matching elements → extend streak
                    streak++;
                    ans = max(ans, streak);
                } 
                else
                {
                    // ❗ reset because subarray must be contiguous
                    streak = 0;
                }

                // Move diagonally
                i++;
                j++;
            }
        }
        
        // Final answer = longest common contiguous subarray length
        return ans;
    }
};