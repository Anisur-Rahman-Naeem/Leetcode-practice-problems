/*
 * @lc app=leetcode id=187 lang=cpp
 *
 * [187] Repeated DNA Sequences
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> output; 
        // Stores final repeated sequences (no duplicates)

        unordered_map<string, int> freq;
        // freq[substring] = how many times this substring appeared

        // 🔴 Important edge case:
        // If string length < 10, we cannot form even one valid substring
        if (s.size() < 10)
        {
            return {};
        }
        
        // 🔵 Sliding window of size 10
        // i represents the starting index of the substring
        for (int i = 0; i <= s.size() - 10; i++)
        {
            // ❗ Confusing Part #1:
            // s.substr(i, 10) → takes 10 characters starting from index i
            // covers indices [i ... i+9]
            string substr = s.substr(i,10);

            // Count frequency of this substring
            freq[substr]++;

            // ❗ Confusing Part #2:
            // Why check == 2?
            // → First time: freq = 1 → ignore
            // → Second time: freq = 2 → add to output ✅
            // → Third+ time: ignore (prevents duplicates in result)
            if (freq[substr] == 2)
            {
                output.push_back(substr);
            }
        }

        return output;
    }
};
// @lc code=end

