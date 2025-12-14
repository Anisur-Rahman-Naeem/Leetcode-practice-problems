#include<iostream>
using namespace std;
int main() {
    int x,y;
    cin>>x>>y;
    if (x<y)
    {
        if ((y-x) <= 2)
        {
            cout<<"Yes";
        } else
        {
            cout<<"No";
        }
        
        
    } else if (x>y)
    {
        if ((x-y) <= 3)
        {
            cout<<"Yes";
        } else
        {
            cout<<"No";
        }
    }
    
    return 0;
}