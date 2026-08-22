#include <bits/stdc++.h>
using namespace std;

int main()
{
    int longest = 0;
    string input;
    cin >> input;

    for (int left = 0; left < input.length(); left++)
    {
        for (int right = left; right < input.length(); right++)
        {
            string value = input.substr(left, right - left + 1);

            string rev = value;
            reverse(rev.begin(), rev.end());

            if (value == rev)
            {
                longest = max(longest, right - left + 1);
            }
        }
    }

    cout << longest << endl;
}