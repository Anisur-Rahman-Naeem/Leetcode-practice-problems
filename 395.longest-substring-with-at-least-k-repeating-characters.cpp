#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {
        // Base case: if the string is empty, there is no substring, so return 0
        if(s.size() == 0) return 0;

        // Step 1: Count the frequency of each character in the current string
        vector<int> freq(26,0);  // assuming lowercase letters only
        for (auto &c : s)
        {
            freq[c-'a']++;  // map character 'a'-'z' to index 0-25
        }

        // Step 2: Scan the string to find the first "invalid" character
        // An invalid character is one whose frequency is < k, because it cannot be
        // part of any valid substring where all characters appear at least k times
        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i]-'a'] < k)
            {
                // Step 3: Split the string around this invalid character
                // LEFT substring: everything before the invalid character
                int left = longestSubstring(s.substr(0,i), k);
                
                // RIGHT substring: everything after the invalid character
                // Note: s.substr(i+1) automatically goes till the end of the string
                int right = longestSubstring(s.substr(i+1), k);

                // Step 4: Return the maximum length from left or right side
                // Because the invalid character itself cannot be in any valid substring
                return max(left,right);
            }
            
        }

        // Step 5: If we finished the loop and found no invalid characters,
        // that means every character appears at least k times
        // So the whole string is valid; return its length
        return s.size();
    }
};