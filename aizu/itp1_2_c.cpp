#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (i != (v.size() -1))
        {
            cout<<v[i]<<" ";
        }else
        {
            cout<<v[i];
        }
    }
    
    

    return 0;
}