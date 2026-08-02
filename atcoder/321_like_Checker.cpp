#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string input = to_string(n);

    for (int i = 0; i < input.length() - 1; i++)
    {
        if (input[i] <= input[i + 1])
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}