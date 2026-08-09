#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string input;
        cin >> input;

        int sum1 = (input[0] - '0') + (input[1] - '0') + (input[2] - '0');
        int sum2 = (input[3] - '0') + (input[4] - '0') + (input[5] - '0');

        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}