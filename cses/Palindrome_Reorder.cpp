#include<iostream>
using namespace std;

int main(){
    string n;
    int oddCount = 0;
    int f_array[26]={};
    cin>>n;

    for (int i = 0; i < n.length(); i++)
    {
        f_array[n[i]-'A']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if ((f_array[i] %2) == 1) oddCount++;
        
    }
    if (oddCount > 1)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    int id = 0;
    
    for (int letter = 0; letter < 26; letter++)
    {
        while (f_array[letter] >= 2)
        {
            f_array[letter]-=2;
            n[id] = 'A' + letter;
            n[n.length() - 1 -id] = 'A' + letter;
            id++;
        }
        
    }
    for (int letter = 0; letter < 26; letter++)
    {
        if (f_array[letter])
        {
            n[id] = 'A' + letter;
        }
        
    }
    
    cout<<n<<endl;
}