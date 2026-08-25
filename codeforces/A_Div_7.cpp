#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int input;
        cin >> input;

        if ((input % 7) == 0)
        {
            cout << input << endl;
        }
        else if ((input % 7) != 0)
        {
            int rem = input % 10;   // 7
            int value = input % 7;  // 6
            int value1 = 7 - value; // 7-6=1
            if ((rem + value1) < 10)
            {
                input += value1;
                cout << input << endl;
            }
            else if ((rem + value1) >= 10)
            {
                input -= value;
                cout << input << endl;
            }
        }
    }
}