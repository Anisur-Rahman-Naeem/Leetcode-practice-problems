#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    bool isFound = false;

    while (t--)
    {
        isFound = false;
        cin >> n >> k;
        int arr[n] = {};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k)
            {
                isFound = true;
                break;
            }
        }

        if (isFound)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}