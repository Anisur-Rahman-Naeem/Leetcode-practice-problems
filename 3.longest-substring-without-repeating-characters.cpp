/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // unordered_map used to track characters currently inside the window
        // We are using it like a set (just tracking existence)
        unordered_map<char,int> duplicate_tracker;

        // left pointer represents the start of the sliding window
        int left = 0;

        // maxLen stores the longest valid substring found so far
        int maxLen = 0;

        // counter is unused here (can be removed)
        int counter = 0;

        // right pointer expands the window one character at a time
        for (int right = 0; right < s.size(); right++)
        {

            /*
            If the current character already exists in the window,
            it means we found a duplicate.

            IMPORTANT POINT:
            We must shrink the window until the duplicate is removed.
            That is why we use a while loop instead of if.

            Example:
            string = "pwwkew"

            window = [p w]
            next char = w → duplicate

            Now we shrink from the left until the duplicate disappears.
            */

            while (duplicate_tracker.find(s[right]) != duplicate_tracker.end())
            {
                // remove the character at the left side of the window
                duplicate_tracker.erase(s[left]);

                // move the left pointer forward (shrinking the window)
                left++;
            }

            /*
            Now the window contains no duplicates,
            so we can safely insert the current character.
            */
            duplicate_tracker[s[right]] = 1;

            /*
            IMPORTANT CONFUSION POINT:

            Window looks like this:

            [left ........ right]

            Length of the window = right - left + 1

            Example:
            indices: 0 1 2
            chars:   a b c

            left = 0
            right = 2

            length = 2 - 0 + 1 = 3

            We update maxLen with the longest window seen so far.
            */
            maxLen = max(maxLen, (right - left) + 1);
        }

        // finally return the longest substring length
        return maxLen;
    }
};
// @lc code=end