#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    for (int i = 0; i < 16; i++)
    {
        if ((i % 2 != 0) && (input[i] != '0'))
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}