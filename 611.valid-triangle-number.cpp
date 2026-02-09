/*
 * @lc app=leetcode id=611 lang=cpp
 *
 * [611] Valid Triangle Number
 */

// @lc code=start
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return 0; // if nums has less than 3 elements then triangle making is not possible so we have to return 0

        sort(nums.begin(),nums.end()); //sorted the array
        int count = 0;

        for (int k = n-1; k >= 2; k--) //reverse looping until we have only 3 elements left to traverse and also did the work freezing the largest element with which we are going to compare the elements in i and j index
        {
            int i = 0; //from zero always the traverse is going to start
            int j = k-1; // took the element before the largest element to calculate if nums[i] + nums[j] > nums[k]

            while (i<j) //we will keep on checking nums[i] + nums[j] > nums[k] till i<j
            {
                if (nums[i] + nums[j] > nums[k]) //the line where the calculation is happening
                {
                    count+=(j-i); //the count variable that carries the amount of valid triangles made it is actually taking the difference of j and i because since the array is sorted if calculation works for a single of i it will automatically work for all the values at the right since it is sorted all the value at the right are greater than the value at its left
                    j--; //if calculation is true then decrementing the j to catch up with k so that it takes the element before the largest element at every iteration
                }else
                {
                    i++; //if calculation is not true then incrementing the ith index and get a new value with which we will calculate j and check if it is a valid triangle
                }
                
                
            }
            
        }
        return count;
    }
};
// @lc code=end

