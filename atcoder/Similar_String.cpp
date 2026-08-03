#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    for (int i = 0; i < n; i++)
    {
        if ((s[i] == t[i]) || (s[i] == '1' && t[i] == 'l') || (t[i] == '1' && s[i] == 'l') || (s[i] == '0' && t[i] == 'o') || (t[i] == '0' && s[i] == 'o'))
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