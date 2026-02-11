/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Sort the array
        // Sorting ensures that duplicates are consecutive and
        // allows us to use the two-pointer technique efficiently.
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;

        // Step 2: Fix the first element of the triplet
        // Loop goes till n-3 because we need at least three numbers for a triplet
        for (int i = 0; i <= (n-3); i++)
        {
            // Skip duplicate 'i' values to avoid duplicate triplets
            // Example: If nums[i] == nums[i-1], then any triplet starting
            // with this nums[i] will be same as previous iteration
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            
            // Step 3: Initialize two pointers for 2Sum problem
            // left starts immediately after i, right at the end
            // This automatically enforces i < left < right
            int left = i + 1;
            int right = n - 1;

            // Step 4: Two-pointer loop to find pairs that sum to -nums[i]
            while (left<right)
            {
                int sum = nums[left] + nums[right] + nums[i];

                // Step 4a: Check for valid triplet
                // The condition (left != right && left != i && right != i) is actually redundant
                // because:
                //   1. left = i+1 → left != i
                //   2. right >= left > i → right != i
                //   3. left < right → left != right
                // But having it does not break correctness, it's just extra
                if ((sum == 0) && ((left != right) && (left != i) && (right != i)))
                {
                    // Found a valid triplet
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Step 4b: Skip duplicates for left pointer
                    // Why compare left with left + 1?
                    // Because there may be multiple identical numbers consecutively.
                    // If we don't skip, we will push the same triplet multiple times.
                    while (left < right && nums[left] == nums[left + 1])
                    {
                        left++;
                    }

                    // Step 4c: Skip duplicates for right pointer
                    // Similar to left pointer: skip consecutive identical numbers to avoid duplicates
                    while (left < right && nums[right] == nums[right -1])
                    {
                        right--;
                    }

                    // Step 4d: Move both pointers inward after storing the triplet
                    // This ensures we look for the next unique pair for the current i
                    left++;
                    right--;
                }
                else if (sum < 0)
                {
                    // If sum is too small, move left pointer right to increase sum
                    left++;
                } else
                {
                    // If sum is too big, move right pointer left to decrease sum
                    right--;
                }     
            }  
        }

        // Step 5: Return all unique triplets
        return result;
    }
};
// @lc code=end
