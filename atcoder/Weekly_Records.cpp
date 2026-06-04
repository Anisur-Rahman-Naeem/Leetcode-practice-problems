#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, sum = 0, A;

    cin>>N;

    while (N--)
    {
        for (int i = 0; i < 7; i++)
        {
            cin>>A;
            sum+=A;
        }
        cout<<sum<<" ";
        sum = 0;
    }
    
}