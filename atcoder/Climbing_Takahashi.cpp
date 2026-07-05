#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, currentHeight = 0,h;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>> h;
        if (h > currentHeight)
        {
            currentHeight = h;
        }else
        {
            break;
        }
        
        
    }
    cout<<currentHeight<<endl;
}