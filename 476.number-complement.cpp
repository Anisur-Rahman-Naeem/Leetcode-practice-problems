/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
#include <iostream>
#include <string> // Required for std::string
#include <vector>
#include <bitset>
class Solution {
public:
    int findComplement(int num) {
        std::string binary = bitset<32>(num).to_string();
        int result = num;
        
        for (int i = 1; i <= binary.size(); i++)
        {
            num = num | (num >> 1);
        }
        
        int result = result ^ num;

        return result;
    }
};
// @lc code=end

