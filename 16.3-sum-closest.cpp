/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
#include <vector>
#include <algorithm>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i <= (n-3); i++) //traverse from 0 to n-3
        {
            int left = i+1;
            int right = n-1;
            while (left<right)
            {
                int currentSum = nums[left] + nums[right] + nums[i];
                
                if (abs(currentSum - target) < abs(closestSum - target)) //checking if closer value found then updating the closestSum variable
                {
                    closestSum = currentSum;
                }

                if (currentSum < target) //checking if currentSum is greater then target updating the left index to increase the value
                {
                    left++;
                } else if (currentSum > target) //checking if currentSum is smaller then target updating the right index to decrease the value
                {
                    right--;
                } else //if equal to the target found then return that target value since both are same closestSum and target at that stage
                {
                    return target;
                }
            }
            
        }

        return closestSum; //after checking all the possibilities returning the last remaining closestSum
        
    }
};
// @lc code=end

