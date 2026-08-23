#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        cin >> x >> k;

        while(true)
        {
            int digitSum = 0;
            int value = x;

            while (value != 0)
            {
                digitSum = digitSum + value % 10;
                value = value / 10;
            }

            if ((digitSum % k) == 0)
            {
                cout << (x) << endl;
                break;
            }
            x++;
        }
    }
}