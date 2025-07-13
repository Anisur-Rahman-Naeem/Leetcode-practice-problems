/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int rotations = 0;
        while(!students.empty() && rotations < students.size())
        {
            if (students[0] == sandwiches[0])
            {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                rotations = 0;
            }
            else
            {
                students.push_back(students[0]);
                students.erase(students.begin());
                rotations++;
            }
            
            
        }
        return students.size();
    }
};
// @lc code=end

