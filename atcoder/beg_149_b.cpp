#include<iostream>
using namespace std;
int main(){
    long long int a, b, k;
    cin>>a>>b>>k;
    if (k<=a)
    {
        a=a-k;
    }
    else if (k>a)
    {
        k = k-a;
        a = 0;
        if (k<=b)
        {
            b = b-k;
        } else if (k>b)
        {
            b=0;
        }
    }
    cout<<a<<" "<<b<<endl;
}