/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();

        sort(nums.begin(), nums.end()); 
        // Sorting is REQUIRED for:
        // 1. Two pointer technique
        // 2. Skipping duplicates safely

        vector<vector<int>> result;

        // i can go only till n-4
        // because we need 3 more elements after i
        for (int i = 0; i <= n - 4; i++)
        {
            // Skip duplicate i values
            // Only skip if this value was already used as first element
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            // j can go only till n-3
            // because we need 2 more elements after j
            for (int j = i + 1; j <= n - 3; j++)
            {
                // Skip duplicate j values
                // IMPORTANT: j > i + 1 (not j > 0)
                // This ensures we skip duplicates only within same i group
                if (j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }

                // Now we fix i and j
                // Two pointers must satisfy:
                // i < j < left < right
                int left = j + 1;   // MUST be j+1 (not i+1)
                int right = n - 1;

                while (left < right)
                {
                    // Use long long to avoid overflow
                    long long sum =
                        (long long)nums[left] +
                        nums[right] +
                        nums[i] +
                        nums[j];

                    if (sum == target)
                    {
                        // Order inside vector doesn't matter,
                        // but logically it represents:
                        // nums[i], nums[j], nums[left], nums[right]
                        result.push_back({nums[left], nums[right], nums[i], nums[j]});

                        // Skip duplicate left values
                        while (left < right && nums[left] == nums[left + 1])
                        {
                            left++;
                        }

                        // Skip duplicate right values
                        // IMPORTANT: compare with right - 1
                        // because right is moving backward
                        while (left < right && nums[right] == nums[right - 1])
                        {
                            right--;
                        }

                        // Move both pointers after finding valid quadruple
                        left++;
                        right--;
                    }
                    else if (sum < target)
                    {
                        // Need bigger sum → move left forward
                        left++;
                    }
                    else
                    {
                        // Need smaller sum → move right backward
                        right--;
                    }
                }
            }
        }
        return result;
    }
};

// @lc code=end
