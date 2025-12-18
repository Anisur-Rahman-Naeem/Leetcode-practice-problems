#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<1000)
    {
        cout<<n<<endl;
    }
    else if (n<10000)
    {
        n=n/10;
        n=n*10;
        cout<<n<<endl;
    }
    else if (n<100000)
    {
        n=n/100;
        n=n*100;
        cout<<n<<endl;
    }
    else if (n<1000000)
    {
        n=n/1000;
        n=n*1000;
        cout<<n<<endl;
    }
    else if (n<10000000)
    {
        n=n/10000;
        n=n*10000;
        cout<<n<<endl;
    }
    else if (n<100000000)
    {
        n=n/100000;
        n=n*100000;
        cout<<n<<endl;
    }
    else if (n<1000000000)
    {
        n=n/1000000;
        n=n*1000000;
        cout<<n<<endl;
    }
    
}