#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int minvalue = INT16_MAX;
        int a, b;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
        {
            int curr = (i - a) + (b - i);

            minvalue = min(curr, minvalue);
        }
        cout << minvalue << endl;
    }
}