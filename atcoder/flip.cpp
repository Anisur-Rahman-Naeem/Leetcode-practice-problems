#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '1')
        {
            input[i] = '0';
        }
        else if (input[i] == '0')
        {
            input[i] = '1';
        }
    }
    cout << input << endl;
}