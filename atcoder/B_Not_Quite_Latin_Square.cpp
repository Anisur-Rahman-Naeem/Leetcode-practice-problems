#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string grid[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> grid[i];
        }

        for (int i = 0; i < 3; i++)
        {
            bool result = grid[i].find('?') != string::npos;
            if (result)
            {
                if (grid[i].find('A') == string::npos)
                {
                    cout << "A\n";
                    break;
                }
                else if (grid[i].find('B') == string::npos)
                {
                    cout << "B\n";
                    break;
                }
                else if (grid[i].find('C') == string::npos)
                {
                    cout << "C\n";
                    break;
                }
            }
        }
    }
}