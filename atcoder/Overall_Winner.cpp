#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string input;
    cin >> input;

    int tWins = 0, aWins = 0, tIndx = 0, aIndx = 0;

    for (int i = 0; i < n; i++)
    {
        if (input[i] == 'T')
        {
            tWins++;
            tIndx = i;
        }
        else if (input[i] == 'A')
        {
            aWins++;
            aIndx = i;
        }
    }

    if (tWins > aWins)
    {
        cout << "T\n";
    }
    else if (tWins < aWins)
    {
        cout << "A\n";
    }
    else if (tWins == aWins)
    {
        if (aIndx > tIndx)
        {
            cout << "T\n";
        }
        else if (aIndx < tIndx)
        {
            cout << "A\n";
        }
    }
}