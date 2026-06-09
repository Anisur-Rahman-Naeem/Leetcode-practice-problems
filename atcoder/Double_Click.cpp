#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, result = 0;
    cin>>n>>d;

    int arr[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int j = 1; j < n; j++)
    {
        if ((arr[j] - arr[j-1]) <= d)
        {
            result = arr[j];
            break;
        }
        
    }

    if (result != 0)
    {
        cout<<result<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    
}