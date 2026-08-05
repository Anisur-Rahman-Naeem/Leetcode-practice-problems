#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r;
    cin>>l>>r;

    string input;
    cin>>input;

    reverse(input.begin() + l-1, input.begin() + r);
    cout<<input;
}