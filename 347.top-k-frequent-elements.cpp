/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq_tracker;
        vector<pair<int,int>> map_entries;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            if (freq_tracker.find(nums[i]) != freq_tracker.end())
            {
                freq_tracker[nums[i]]++;
            }else if (freq_tracker.find(nums[i]) == freq_tracker.end())
            {
                freq_tracker[nums[i]] = 1;
            }
        }

        for (const auto &pair : freq_tracker)
        {
            map_entries.push_back(pair);
        }
        
        sort(map_entries.begin(), map_entries.end(), [](const pair<int,int>&a, const pair<int,int>&b){
            return a.second > b.second;
        });

        for (int i = 0; i < k; i++)
        {
            result.push_back(map_entries[i].first);
        }
        
        return result;
    }
};
// @lc code=end

