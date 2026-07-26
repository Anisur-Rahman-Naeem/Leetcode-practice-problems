#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;

    string grid[R] = {};
    string ans[R] = {};

    for (int i = 0; i < R; i++)
    {
        cin >> grid[i];
        ans[i] = grid[i];
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (isdigit(grid[i][j]))
            {
                int power = grid[i][j] - '0';

                for (int x = 0; x < R; x++)
                {
                    for (int y = 0; y < C; y++)
                    {
                        int dist = abs(i - x) + abs(j - y);

                        if (dist <= power)
                        {
                            ans[x][y] = '.';
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}