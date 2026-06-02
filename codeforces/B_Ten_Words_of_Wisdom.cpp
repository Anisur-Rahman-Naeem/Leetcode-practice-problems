#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, b, hghst_qlty = 0, result = 0, count = 0;
    cin>>t;

    while (t--)
    {
        hghst_qlty = 0;
        cin>>n;
        count = 0;
        while (n--)
        {
            count++;
            cin>>a>>b;
            if (a <= 10 && b > hghst_qlty)
            {
                hghst_qlty = b;
                result = count;
            }
            
        }
        cout<<result<<endl;
    }
    
}