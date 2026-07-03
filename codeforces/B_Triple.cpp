#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, currentCount, currentNum, n;
    bool isFound = false;
    cin >> t;

    while (t--)
    {
        isFound = false;
        currentCount = currentNum = 0;
        cin >> n;

        int arr[n] = {};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int freq[n + 1] = {};

        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] == 2)
            {
                freq[arr[i]]++;
                cout << arr[i] << endl;
                isFound = true;
                break;
            }
            else
            {
                freq[arr[i]]++;
            }
        }
        if (!isFound)
        {
            cout << "-1" << endl;
        }
    }
}