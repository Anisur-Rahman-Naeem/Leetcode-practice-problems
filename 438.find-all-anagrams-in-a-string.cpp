/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // ------------------------
        // Step 0: Initialize arrays and variables
        // ------------------------
        int pFreq[26] = {0}; // frequency array for string p
        int sFreq[26] = {0}; // frequency array for current window in s
        int pWindowSize = p.size(); // length of pattern p
        bool isSame = true; // flag to check if first window matches
        vector<int> result; // stores the starting indices of anagrams

        // ------------------------
        // Step 0.5: Edge case
        // If pattern p is longer than s, no anagrams exist
        // ------------------------
        if (p.size() > s.size()) return {}; // avoids out-of-bounds errors

        // ------------------------
        // Step 1: Build frequency array for p
        // Each index 0..25 corresponds to 'a'..'z'
        // ------------------------
        for (auto &character : p)
        {
            pFreq[character - 'a']++; 
            // e.g., 'c' - 'a' = 2, so pFreq[2]++
        }

        // ------------------------
        // Step 2: Build frequency array for the first window in s
        // First window is s[0 .. p.size()-1]
        // ------------------------
        for (int i = 0; i < p.size(); i++)
        {
            sFreq[s[i] - 'a']++; 
            // counts characters in the first window
        }

        // ------------------------
        // Step 3: Compare first window with p
        // If identical, first window is an anagram
        // ------------------------
        for (int i = 0; i < 26; i++)
        {
            if (pFreq[i] != sFreq[i])
            {
                isSame = false; // arrays differ → not an anagram
                break; // no need to check further
            }
        }
        if (isSame)
        {
            result.push_back(0); // first window is an anagram, add index 0
        }

        // ------------------------
        // Step 4: Slide the window over s
        // Use sliding window technique
        // ------------------------
        for (int j = pWindowSize; j < s.size(); j++)
        {
            // Add the new right character to window
            sFreq[s[j] - 'a']++;

            // Remove the old left character from window
            sFreq[s[j - pWindowSize] - 'a']--;
            // This line confused you before:
            // s[j - pWindowSize] is the character leaving the window
            // '- 'a'' converts character to 0..25 index
            // '--' decreases its count

            // Compare current window with p
            if (compareArrays(pFreq, sFreq))
            {
                // If arrays match, current window is an anagram
                result.push_back(j - pWindowSize + 1);
                // j - pWindowSize + 1 gives the starting index of the current window
            }
        }

        // Step 5: Return all starting indices
        return result;
    }

    // ------------------------
    // Helper function: compare two frequency arrays
    // ------------------------
    bool compareArrays(int a[], int b[]){
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                return false; // mismatch → not an anagram
            }
        }
        return true; // all counts match → anagram
    }
};
// @lc code=end