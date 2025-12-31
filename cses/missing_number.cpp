#include<iostream>
using namespace std;

int main(){
    long long n, input;
    cin>>n;
    int arr[n+1]={};

    for (int i = 1; i <= n-1; i++)
    {
        cin>>input;
        arr[input]= arr[input]+1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout<<i<<endl;
            break;
        }
        
    }
    
    
    return 0;
}