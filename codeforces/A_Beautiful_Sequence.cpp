#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;

    int v[n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (v[i] <= i)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        
    }
    cout<<"NO"<<endl;
    return 0;
}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        solve();
    }
    return 0;
}