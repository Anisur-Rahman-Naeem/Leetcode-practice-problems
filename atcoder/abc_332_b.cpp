#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K, G, M;
    cin >> K >> G >> M;

    int m = 0;
    int g = 0;
    int transfer;
    while (K--)
    {
        if (g == G)
        {
            g = 0;
        }
        else if (m == 0)
        {
            m = M;
        }
        else
        {
            transfer = min((G - g), m);
            g+=transfer;
            m-=transfer;
        }
    }
    cout<<g<<" "<<m<<endl;
}