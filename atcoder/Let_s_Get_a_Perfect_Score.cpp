#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    bool isValid = true;

    string arr[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        isValid = true;
        for (int j = i + 1; j < n; j++)
        {
            isValid = true;
            for (int k = 0; k < m; k++)
            {
                if ((arr[i][k] == 'o') || (arr[j][k] == 'o'))
                {
                    isValid = true;
                }
                else
                {
                    isValid = false;
                    break;
                }
            }
            if (isValid)
            {
                count++;
            }
        }
    }

    cout << count << endl;
}