#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    string input;
    cin>>t;

    while (t--)
    {
        cin>>input;
        int length = input.length();
        if (length > 10)
        {
            cout<<input[0]<<(length-2)<<input[length-1]<<endl;
        } else if (length <= 10)
        {
            cout<<input<<endl;
        }
        
        
    }
    return 0;
}