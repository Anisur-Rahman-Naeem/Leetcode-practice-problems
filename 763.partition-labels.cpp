/*
 * @lc app=leetcode id=763 lang=cpp
 *
 * [763] Partition Labels
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        // Step 1: Store the last occurrence index of each character
        // last[0] -> last index of 'a'
        // last[1] -> last index of 'b'
        // ...
        // last[25] -> last index of 'z'
        int last[26];

        for (int i = 0; i < s.size(); i++)
        {
            // Convert character to index using (s[i] - 'a')
            // and store its latest position
            last[s[i] - 'a'] = i;
        }

        // This will store sizes of each valid partition
        vector<int> result;

        // 'start' marks the beginning of current partition
        int start = 0;

        // 'end' marks the farthest boundary required
        // to include all characters seen so far
        int end = 0;

        // Step 2: Traverse the string again to build partitions
        for (int i = 0; i < s.size(); i++)
        {
            // Expand the partition boundary
            // based on last occurrence of current character
            end = max(end, last[s[i] - 'a']);

            // If current index reaches the boundary,
            // it means all characters in this segment
            // do NOT appear later in the string
            if (i == end)
            {
                // Length of current partition
                // (inclusive range → end - start + 1)
                result.push_back((end - start) + 1);

                // Move start to next position
                // to begin a new partition
                start = end + 1;
            }
        }

        // Return all partition sizes
        return result;
    }
};
// @lc code=end