#include<iostream>
using namespace std;

int main(){
    int n,t,a;
    cin>>n>>t>>a;

    int b = n - (t + a);
    
    if ((t>(a+b) || a>(b+t)))
    {
        cout<<"Yes";
    } else
    {
        cout<<"No";
    }
    
    return 0;
}