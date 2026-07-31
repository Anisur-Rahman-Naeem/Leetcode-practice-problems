#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;

    char last = input[input.length() - 1];
    int converted = last - '0';
    converted++;
    cout<<input.substr(0,input.length()-1)<<converted;
}