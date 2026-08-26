#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k, count = 0;
        cin >> n >> m >> k;
        int arrB[n] = {};
        int arrC[m] = {};

        for (int i = 0; i < n; i++)
        {
            cin >> arrB[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arrC[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((arrB[i] + arrC[j]) <= k)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
}