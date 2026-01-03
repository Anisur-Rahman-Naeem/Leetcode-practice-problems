#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    int sum=0;
    cin>>input;
    for (int i = 0; i < input.length(); i++)
    {
        sum+=(input[i]-'0');
    }
    
    cout<<sum;
}