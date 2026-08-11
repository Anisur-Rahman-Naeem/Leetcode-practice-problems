#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string input;
        cin >> input;

        int freq[26] = {0};
        int numberOfBallo = 0;

        for (char c : input)
        {
            freq[c - 'A']++;
            if (freq[c - 'A'] == 1)
            {
                numberOfBallo += 2;
            }
            else
            {
                numberOfBallo++;
            }
        }
        cout << numberOfBallo << endl;
    }
}