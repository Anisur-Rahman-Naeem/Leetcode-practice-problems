#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, s, sum = 0;
    cin>>n>>x;

    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s<=x)
        {
            sum+=s;
        }
        
    }
    cout<<sum<<endl;
    
}