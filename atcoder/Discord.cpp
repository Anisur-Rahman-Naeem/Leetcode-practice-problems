#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int photos[m][n] = {};
    bool adjacent[51][51] = {false};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> photos[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int x = photos[i][j];
            int y = photos[i][j + 1];

            adjacent[x][y] = true;
            adjacent[y][x] = true;
        }
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (!adjacent[i][j])
            {
                ans++;
            }
        }
    }

    cout<<ans<<endl;
}