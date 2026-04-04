#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, y;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x;
        if (x < 67)
        {
            y = x + 1;
            cout << y << endl;
        }
        else if (x >= 67)
        {
            y = x;
            cout << y << endl;
        }
    }
    return 0;
}