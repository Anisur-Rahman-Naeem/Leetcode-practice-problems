/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(),g.end());
        // Sort greed factors in increasing order.
        // This allows us to try satisfying the least greedy child first.
        // Sorting is what makes the greedy approach correct.

        sort(s.begin(),s.end());
        // Sort cookie sizes in increasing order.
        // We try to use the smallest possible cookie first.

        int i = 0;
        // Pointer for children (greed array)

        int j = 0;
        // Pointer for cookies (size array)

        int count = 0;
        // Counts how many children are satisfied

        while (i != g.size() && j != s.size())
        {
            // CONFUSION AREA:
            // Using "!=" works here because:
            // - i and j start at 0
            // - They only increase by 1
            // - They never skip values
            //
            // But generally, safer style is:
            // while (i < g.size() && j < s.size())
            // because "<" guarantees we never go out of bounds
            // even if index logic changes in future.

            if (s[j] >= g[i])
            {
                // If current cookie can satisfy current child:

                count++;
                // We successfully satisfied one child.

                i++;
                // Move to next child (since this one is satisfied)

                j++;
                // Move to next cookie (since this cookie is used)
            }
            else
            {
                // If cookie is too small for this child:

                j++;
                // Try next bigger cookie.
                // We DO NOT move i here,
                // because this child is not satisfied yet.
            }
        }

        return count;
        // Return total satisfied children.
    }
};

// @lc code=end

