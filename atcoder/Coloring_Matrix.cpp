#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arrA[n + 1][n + 1] = {};
    int arrB[n + 1][n + 1] = {};
    int temp[n + 1][n + 1] = {};

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arrA[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arrB[i][j];
        }
    }

    int flag = 0;

    for (int k = 0; k < 4; k++)
    {
        int flag2 = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (arrA[i][j] == 1 && arrB[i][j] == 0)
                {
                    flag2 = 0;
                }
            }
        }
        if (flag2 == 1)
        {
            flag = 1;
            break;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                temp[i][j] = arrA[n + 1 - j][i];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                arrA[i][j] = temp[i][j];
            }
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}