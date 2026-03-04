/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groupAnagrams;
        vector<vector<string>> vectorOfAnagrams;

        for (int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            groupAnagrams[temp].push_back(strs[i]);
        }
        for (auto pair : groupAnagrams)
        {
            vectorOfAnagrams.push_back(pair.second);
        }
        
        return vectorOfAnagrams;
    }
};
// @lc code=end

