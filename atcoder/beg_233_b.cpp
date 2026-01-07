#include<iostream>
using namespace std;

int main(){
    int l, r;
    string s;
    cin>>l>>r>>s;
    l--;
    r--;

    int length = (r-l)+1;

    for (int i = 0; i < length/2; i++)
    {
        char c = s[l+length-i-1];
        s[l+length-i-1] = s[l+i];
        s[l+i] = c;
    }
    cout<<s<<endl;

    return 0;
}