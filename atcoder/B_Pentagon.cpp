#include<bits/stdc++.h>
using namespace std;

int getDistance(char a, char b){
    int x = a - 'A';
    int y = b - 'A';

    int d = abs(x-y);
    d = min(d, 5 - d);

    return d;
}

int main(){
    string s, t;
    cin>>s>>t;

    int d1 = getDistance(s[0], s[1]);
    int d2 = getDistance(t[0], t[1]);

    if(d1 == d2) cout << "Yes\n";
    else cout << "No\n";
}