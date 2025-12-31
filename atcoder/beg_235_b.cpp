#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int ans = arr[0];

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i+1] > arr[i])
        {
            ans=arr[i+1];
        }
        else
        {
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}