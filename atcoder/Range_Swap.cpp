#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p, q, r, s;
    cin>>n>>p>>q>>r>>s;

    int arr[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int len = (q - p) + 1;

    for (int i = 0; i < len; i++)
    {
        swap(arr[(p - 1) + i], arr[(r - 1) + i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i > 0) cout<<' ';
        cout<<arr[i];
    }
    cout<<endl;
    
}