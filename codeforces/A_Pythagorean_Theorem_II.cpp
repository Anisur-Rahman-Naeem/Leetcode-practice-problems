#include<iostream>
using namespace std;

bool isPerfectSquare[100000001];

int main(){
    int n, cnt = 0;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        isPerfectSquare[i*i] = true;
    }
    

    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            int csquare = a*a + b*b;

            if (csquare <= n*n && isPerfectSquare[csquare])
            {
                cnt++;    
            }
            
        }
        
    }
    cout<<cnt<<endl;
    return 0;
}