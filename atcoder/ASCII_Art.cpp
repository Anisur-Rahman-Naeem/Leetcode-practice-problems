#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    int arr[H][W] = {};

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (arr[i][j] == 0)
            {
                cout<<".";
            }else
            {
                char character = 'A' + (arr[i][j] - 1);
                cout<<character;
            }
        }
        cout<<endl;
    }
}