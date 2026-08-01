#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0;
    string comp = "abc";
    cin >> t;

    while (t--)
    {
        string input;
        cin >> input;
        count = 0;

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] != comp[i])
            {
                count++;
            }
        }

        if (count <= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}