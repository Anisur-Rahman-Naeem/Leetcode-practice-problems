#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int temp = 0, permanent = 0;
    string s[n] = {};
    bool arr[d];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j][i] == 'x')
            {
                arr[i] = false;
                break;
            }
            else if (s[j][i] == 'o')
            {
                arr[i] = true;
            }
        }
    }

    for (int i = 0; i < d; i++)
    {
        if (arr[i] == true)
        {
            temp++;
            permanent = max(temp, permanent);
        }
        else if (arr[i] == false)
        {
            temp = 0;
            permanent = max(temp, permanent);
        }
    }
    cout << permanent << endl;
}