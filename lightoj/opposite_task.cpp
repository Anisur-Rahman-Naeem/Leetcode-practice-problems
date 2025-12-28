#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if (n<=10)
        {
            cout<<"0"<<" "<<n<<endl;
        } else
        {
            cout<<n-10<<" "<<"10"<<endl;
        }
    }
    return 0;
}