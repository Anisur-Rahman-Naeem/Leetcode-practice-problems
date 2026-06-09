#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, b, sum = 0;
    cin>>n>>m;
    int arr[n] = {};

    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin>>b;
        sum+=arr[b];
    }
    cout<<sum<<endl;
}