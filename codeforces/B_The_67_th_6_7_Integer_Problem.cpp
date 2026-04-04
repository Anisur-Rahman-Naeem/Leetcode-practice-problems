#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int result=0;
    int arr[7];
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        result = 0;
        for (int j = 0; j < 7; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + 7);

        for (int k = 0; k < 7; k++)
        {
            if (k != 6)
            {
                result += (arr[k] * -1);
            }else if (k == 6)
            {
                result += arr[k];
            }
            
        }
        cout<<result<<endl;
        
    }
}