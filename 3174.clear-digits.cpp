/*
 * @lc app=leetcode id=3174 lang=cpp
 *
 * [3174] Clear Digits
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string clearDigits(string s)
    {
        stack<char> stack_s;
        regex pattern("\\d+");
        for (char ch : s)
        {
            if (!stack_s.empty())
            {
                if (regex_match(string(1, ch), pattern))
                {
                    stack_s.pop();
                }
                else
                {
                    stack_s.push(ch);
                }
            }
            else if (stack_s.empty() && (regex_match(string(1, ch), pattern)))
            {
                continue;
            }
            else
            {
                stack_s.push(ch);
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
