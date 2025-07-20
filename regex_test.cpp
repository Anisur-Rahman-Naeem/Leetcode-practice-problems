#include<bits/stdc++.h>
#include <regex>
using namespace std;

int main() {
    string input;
    cout<<"Enter the input string"<<endl;
    cin >> input;
    regex pattern("\\d+");
    if (regex_match(input, pattern))
    {
        cout<< "This is a number!";
    } else
    {
        cout<< "This is not a number!";
    }
}