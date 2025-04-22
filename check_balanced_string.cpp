#include<iostream>
using namespace std;

int main() {
    string num;
    int even,odd;
    even=odd=0;
    cin>> num;
    int convertedNum = stoi(num);
    for (int i = 0; i < num.length(); i++)
    {
        if (i%2 == 0 || i ==0)
        {
            even++;
        }
        else if (i%2!= 0)
        {
            odd++;
        }
    }
    if (even==odd)
    {
        cout<<"true";
    }else
    {
        cout<<"false";
    }
    
    
}