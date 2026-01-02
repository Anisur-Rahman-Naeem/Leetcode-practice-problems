#include<iostream>
using namespace std;

int main(){
    int n, sum_p=0,sum_s=0;
    cin>>n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j==n-1)
            {
                sum_p+=arr[i][j];
                break;
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >=0; j--)
        {
            if (i==j)
            {
                sum_s+=arr[i][j];
                break;
            }
            
        }
        
    }

    cout<<abs(sum_p-sum_s);
}