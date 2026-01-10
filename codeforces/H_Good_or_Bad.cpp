#include<iostream>
using namespace std;

int main(){
    int tc;
    string s;
    
    cin>>tc;
    while (tc--)
    {
        bool flag = false;
        cin>>s;
        for (int i = 2; s[i] != '\0'; i++)
        {
            
            if ((s[i-2] == '0' && s[i-1] == '1' && s[i] == '0') || (s[i-2] == '1' && s[i-1] == '0' && s[i] == '1'))
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout<<"Good"<<endl;
        }else
        {
            cout<<"Bad"<<endl;
        }
        
        
    }
    
}