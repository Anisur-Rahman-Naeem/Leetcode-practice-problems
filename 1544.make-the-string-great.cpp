/*
 * @lc app=leetcode id=1544 lang=cpp
 *
 * [1544] Make The String Great
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeGood(string s) {
        stack<char> stack_s;
        for (char ch : s)
        {
            if (islower(ch))
            {
                if (!stack_s.empty() && (toupper(ch) == stack_s.top()))
                {
                    stack_s.pop();
                }
                else
                {
                    stack_s.push(ch);
                }
                
            }
            else if (isupper(ch))
            {
                if (!stack_s.empty() && (tolower(ch) == stack_s.top()))
                {
                    stack_s.pop();
                }
                else
                {
                    stack_s.push(ch);
                }
            }
            
        }

        string result;

        while (!stack_s.empty())
        {
            result += stack_s.top();
            stack_s.pop();
        }
        reverse(result.begin(), result.end());
        
        return result;
    }
};
// @lc code=end

