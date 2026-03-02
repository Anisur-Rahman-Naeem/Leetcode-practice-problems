/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);

        unordered_map<char, string> forwardMap;
        unordered_map<string, char> reverseMap;
        vector<string> words_splitted;

        string word;

        while (ss >> word)
        {
            words_splitted.push_back(word);
        }

        if (words_splitted.size() != pattern.size())
        {
            return false;
        }
        for (int i = 0; i < pattern.size(); i++)
        {
            char c = pattern[i];
            string w = words_splitted[i];

            if (forwardMap.find(c) != forwardMap.end())
            {
                auto it = forwardMap.find(c);
                if (it->second != words_splitted[i])
                {
                    return false;
                }
            }
            else if (forwardMap.find(c) == forwardMap.end())
            {
                if (reverseMap.find(words_splitted[i]) != reverseMap.end())
                {
                    auto it = reverseMap.find(words_splitted[i]);
                    if (it->second != pattern[i])
                    {
                        return false;
                    }
                }

                forwardMap[c] = words_splitted[i];
                reverseMap[words_splitted[i]] = c;
            }
        }

        return true;
    }
};
// @lc code=end
