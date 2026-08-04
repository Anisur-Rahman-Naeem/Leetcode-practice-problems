#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, strIndx = -1, frstBrIndx = -1, scndBrIndx = -1, count = 0;
    cin >> n;

    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '|')
        {
            count++;
            if (count == 1)
            {
                frstBrIndx = i;
            }
            else if (count == 2)
            {
                scndBrIndx = i;
            }
        }
        else if (input[i] == '*')
        {
            strIndx = i;
        }
    }

    if ((frstBrIndx < strIndx) && (scndBrIndx > strIndx))
    {
        cout << "in\n";
    }
    else
    {
        cout << "out\n";
    }
}