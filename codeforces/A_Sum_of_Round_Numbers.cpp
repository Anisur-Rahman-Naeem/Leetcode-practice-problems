#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n, place, count=0;
    cin>>t;

    while (t--)
    {
        count=0;
        cin>>n;

        int temp = n;
        while (temp > 0)
        {
            if (temp % 10 != 0) count++;
            
            temp/=10;
        }
        cout<<count<<endl;

        place = 1;

        while (n > 0)
        {
            int digit = n % 10;

            if (digit != 0){
                cout<<place * digit <<" ";
            }
            
            n /= 10;
            place *=10;
        }
        cout<<endl;
    }
    
}