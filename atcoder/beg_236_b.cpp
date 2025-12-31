#include<iostream>
using namespace std;

int main(){
    int n, input;
    cin>>n;
    int arr[n+1]={};

    for (int i = 1; i <= (n * 4) -1; i++)
    {
        cin>>input;
        arr[input]++;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 3)
        {
            cout<<i<<endl;
            break;
        }
        
    }
    return 0;
}