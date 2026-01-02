#include<iostream>
using namespace std;

int main(){
    int n, m, x;
    bool flag=false;
    cin>>n>>m;

    int arr[n][m] = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cin>>x;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                flag=true;
                break;
            }
            
        }
    }

    if (flag == true)
    {
        cout<<"will not take number";
    } else
    {
        cout<<"will take number";
    }
    
    return 0;
}