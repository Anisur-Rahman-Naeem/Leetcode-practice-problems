#include<iostream>
using namespace std;

int main(){
    int n,input;
    long long sum=0;
    cin>>n;

    for (int i = 1; i <= n * 7; i++)
    {
        cin>>input;
        sum+=input;

        if (i % 7 == 0)
        {
            cout<<sum<<" ";
            sum = 0;
        }
    }
    cout<<endl;
    return 0;
}