/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s_to_t.find(s[i]) != s_to_t.end())
            {
                if (s_to_t[s[i]] != t[i])
                {
                    return false;
                }
            }
            else if (s_to_t.find(s[i]) == s_to_t.end())
            {
                if (t_to_s.find(t[i]) == t_to_s.end())
                {
                    s_to_t[s[i]] = t[i];
                    t_to_s[t[i]] = s[i];
                }
                else if (t_to_s.find(t[i]) != t_to_s.end())
                {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end
