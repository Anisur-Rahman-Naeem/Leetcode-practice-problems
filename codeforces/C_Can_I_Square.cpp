#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long t, sum, square;
    cin>>t;

    while (t--)
    {
        int buckets;
        cin>>buckets;

        sum = 0;
        for (int i = 1; i <= buckets; i++)
        {
            cin>>square;
            sum+=square;
        }
        
        long long result = sqrt(sum);
        if ((result * result) == sum)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}

