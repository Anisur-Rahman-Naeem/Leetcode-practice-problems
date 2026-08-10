#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int cntstMin;
        cin >> cntstMin;

        string input;
        cin >> input;

        int freq[26] = {0};
        int count = 0;

        for (char c : input)
        {
            freq[c - 'A']++;
        }

        for (int i = 0; i < 26; i++)
        {
            int requiredTime = i + 1;

            if (freq[i] >= requiredTime)
            {
                count++;
            }
        }

        cout << count << endl;
    }
}