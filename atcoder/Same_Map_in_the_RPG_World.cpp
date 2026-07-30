#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    char A[H][W], B[H][W];

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> B[i][j];
        }
    }

    int flag = 0;
    for (int s = 0; s < H; s++)
    {
        for (int t = 0; t < W; t++)
        {
            int flag2 = 1;
            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < W; j++)
                {
                    char currentvalue = A[(i + s) % H][(j + t) % W];

                    if (currentvalue != B[i][j])
                    {
                        flag2 = 0;
                    }
                }
            }
            if (flag2 == 1)
            {
                flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}