#include<iostream>
using namespace std;

int main(){
    int t, k;
    cin>>t;
    
    while (t--)
    {
        int count = 0;
        cin>>k;
        for (int i = 1; ; i++)
        {
            if ((i % 3 == 0) || (i % 10 == 3))
            {
                continue;
            }
            count++;

            if (count == k)
            {
                cout<<i<<endl;
                break;
            }
            
        }
        
    }
    
}