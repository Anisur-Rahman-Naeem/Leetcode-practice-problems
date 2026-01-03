#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int FA_s[26] = {};

    for (char c : s)
    {
        FA_s[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (FA_s[i] > 0)
        {
            cout<<char(i+'a')<<" "<<":"<<" "<<FA_s[i]<<endl;
        }
        
    }
    return 0;
}