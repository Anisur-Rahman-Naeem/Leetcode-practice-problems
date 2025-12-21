#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, X, Y, Z;
    cin>>N>>X>>Y>>Z;
    if ((X>Y) && (Z<=X && Z>=Y))
    {
        cout<<"Yes";
    } else if((Y>X) && (Z>=X && Z<=Y))
    {
        cout<<"Yes";
    }else
    {
        cout<<"No";
    }
    
    return 0;
}