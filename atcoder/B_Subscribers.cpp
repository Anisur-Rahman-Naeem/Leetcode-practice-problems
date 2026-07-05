#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string input = to_string(n);

    int d = input.size();

    int k = d - 3;
    int power = 1;
    for(int i = 0; i < k; i++) power *=10;
    int answer = (n/power) * power;
    
    cout<<answer<<endl;

    return 0;
}