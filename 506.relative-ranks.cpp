/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 */

// @lc code=start
#include<bits/stdc++.h>
#include <vector>
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> scoreWithIndex;

        for (int i = 0; i < n; i++)
        {
            scoreWithIndex.push_back({score[i], i});
        }

        sort(scoreWithIndex.begin(), scoreWithIndex.end(), greater<>());

        vector<string> result(n);


        for (int i = 0; i < n; i++)
        {
            int index = scoreWithIndex[i].second
            if (i == 0) result[index] = "Gold Medal";
            else if (i == 1) result[index] = "Silver Medal";
            else if result[index] = to_string(i + 1)
        }
        
        return result;
    }
};
// @lc code=end

