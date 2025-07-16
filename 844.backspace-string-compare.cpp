#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st_s;
        stack<char> st_t;
        
        for (char ch_s: s){
            if (!st_s.empty() && ch_s == '#')
            {
                st_s.pop();
            } else if (st_s.empty() && ch_s == '#'){
                continue;
            } else {
                st_s.push(ch_s);
            }
        }

        for (char ch_t: t){
            if (!st_t.empty() && ch_t == '#')
            {
                st_t.pop();
            } else if (st_t.empty() && ch_t == '#'){
                continue;
            } else {
                st_t.push(ch_t);
            }
        }

        string result_s;
        string result_t;

        while (!st_s.empty())
        {
            result_s += st_s.top();
            st_s.pop();
        }

        while (!st_t.empty())
        {
            result_t += st_t.top();
            st_t.pop();
        }
        reverse(result_s.begin(), result_s.end());
        reverse(result_t.begin(), result_t.end());

        return (result_s == result_t);
    }
    };