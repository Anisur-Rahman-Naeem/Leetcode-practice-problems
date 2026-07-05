#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int person[n + 1] = {};

    for (int i = 1; i <= n; i++)
    {
        cin >> person[i];
    }

    bool called[n + 1] = {false};

    for (int i = 1; i <= n; i++)
    {
        if (called[i] == false)
        {
            called[person[i]] = true;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (called[i] == false)
        {
            count++;
        }
    }

    cout<<count<<endl;

    for (int i = 1; i <= n; i++)
    {
        if (called[i] == false)
        {
            cout<<i<<" ";
        }
    }
    
}