/*
 * Sliding Window Solution
 * Goal: Find the maximum average of any subarray of size k
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        // sum_value → stores the current window sum
        double sum_value = 0;

        // result_value → stores the maximum average found so far
        // initialized with a very small value so first comparison works
        double result_value = -10000;

        int i;

        // Case 1: normal sliding window when array size is greater than k
        if (nums.size() > k)
        {
            // Step 1: Build the FIRST window of size k
            // This was one of the confusing parts earlier — we must
            // compute the first k elements before sliding the window
            for (i = 0; i < k; i++)
            {
                sum_value += nums[i];
            }

            // Calculate average of the first window
            result_value = max(result_value, sum_value / k);

            // Step 2: Slide the window
            // i represents the new starting index of the window
            for (i = 1; i < (nums.size() - (k - 1)); i++)
            {
                /*
                 Sliding window logic:

                 Old window:
                 [ nums[i-1], ..., nums[i+k-2] ]

                 New window:
                 [ nums[i], ..., nums[i+k-1] ]

                 So:
                 - remove element leaving → nums[i-1]
                 - add element entering → nums[i+k-1]
                */

                sum_value = (sum_value - nums[i - 1]) + nums[i + (k - 1)];

                // update maximum average
                result_value = max(result_value, sum_value / k);
            }
        }

        // Case 2: if array size equals k
        // only one window exists
        else if (nums.size() == k)
        {
            for (i = 0; i < k; i++)
            {
                sum_value += nums[i];
            }
            return sum_value / k;
        }

        // Case 3: invalid case (array smaller than k)
        else
        {
            return 0;
        }

        return result_value;
    }
};