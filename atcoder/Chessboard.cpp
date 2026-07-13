#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input[8] = {};
    string squareName = "";

    for (int i = 0; i < 8; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (input[i][j] == '*')
            {
                if (j == 0)
                {
                    squareName = "a";
                    squareName = squareName + to_string(8 - i);
                }
                else if (j == 1)
                {
                    squareName = "b";
                    squareName = squareName + to_string(8 - i);
                }
                else if (j == 2)
                {
                    squareName = "c";
                    squareName = squareName + to_string(8 - i);
                }
                else if (j == 3)
                {
                    squareName = "d";
                    squareName = squareName + to_string(8 - i);
                }
                else if (j == 4)
                {
                    squareName = "e";
                    squareName = squareName + to_string(8 - i);
                }
                else if (j == 5)
                {
                    squareName = "f";
                    squareName = squareName + to_string(8 - i);
                }
                else if (j == 6)
                {
                    squareName = "g";
                    squareName = squareName + to_string(8 - i);
                }
                else if (j == 7)
                {
                    squareName = "h";
                    squareName = squareName + to_string(8 - i);
                }
                cout << squareName << endl;
                return 0;
            }
        }
    }
}