#include<iostream>
using namespace std;

int main(){
    string s;
    bool flag = true;
    cin>>s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[s.length() - i-1])
        {
            flag = false;
            break;
        }
        
    }
    if (flag == true)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
    
    
}