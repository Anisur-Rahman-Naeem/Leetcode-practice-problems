#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string input;
    cin >> input;

    for (int i = 0; i < input.length() - 1; i++)
    {
        if ((input[i] == 'M' && input[i + 1] == 'F') || (input[i] == 'F' && input[i + 1] == 'M'))
        {
            continue;
        }
        else
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}