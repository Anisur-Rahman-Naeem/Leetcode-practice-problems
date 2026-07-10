#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    int sum = 0;
    string input;

    for (int i = 0; i < h; i++)
    {
        cin >> input;
        for (int j = 0; j < w; j++)
        {
            if (input[j] == '#')
            {
                sum++;
            }
        }
    }
    cout << sum << endl;
}