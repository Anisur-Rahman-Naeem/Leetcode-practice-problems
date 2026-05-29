#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n, k;
        cin>>n>>k;

        int x = n - (k-1);
        int y = n - 2*(k-1);

        if (x >= 1 && x %2 == 1)
        {
            cout<<"YES"<<endl;
            for (int i = 1; i <= k-1; i++)
            {
                printf("1 ");
            }
            cout<<x<<endl;
        }
        else if (y >= 1 && y %2 == 0)
        {
            cout<<"YES"<<endl;
            for (int i = 1; i <= k-1; i++)
            {
                printf("2 ");
            }
            cout<<y<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}