#include <bits/stdc++.h>
using namespace std;

int main()
{
    int points[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            string input;
            cin >> input;
            for (int j = 0; j < input.length(); j++)
            {
                if (input[j] == 'X')
                {
                    count += points[i][j];
                }
            }
        }
        cout << count << endl;
    }
}