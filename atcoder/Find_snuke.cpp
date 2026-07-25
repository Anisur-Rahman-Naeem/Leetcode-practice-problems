#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;

    cin >> H >> W;

    string grid[H] = {};

    for (int i = 0; i < H; i++)
    {
        cin >> grid[i];
    }

    string target = "snuke";

    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (grid[i][j] != 's')
            {
                continue;
            }

            for (int d = 0; d < 8; d++)
            {
                bool ok = true;

                for (int k = 0; k < 5; k++)
                {
                    int nr = i + dr[d] * k;
                    int nc = j + dc[d] * k;

                    if (nr < 0 || nr >= H || nc < 0 || nc >= W)
                    {
                        ok = false;
                        break;
                    }

                    if (grid[nr][nc] != target[k])
                    {
                        ok = false;
                        break;
                    }
                }

                if (ok)
                {
                    for (int k = 0; k < 5; k++)
                    {
                        cout << i + dr[d] * k + 1 << " " << j + dc[d] * k + 1 << endl;
                    }
                    return 0;
                }
            }
        }
    }
}
