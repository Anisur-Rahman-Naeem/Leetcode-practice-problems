#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << arr[0] << " ";

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            
            for (int j = arr[i] + 1; j <= arr[i + 1]; j++)
            {
                cout << j << " ";
            }
        }
        else if (arr[i] > arr[i + 1])
        {
            // cout << arr[i] << " ";

            for (int j = arr[i] - 1; j >= arr[i + 1]; j--)
            {
                cout << j << " ";
            }
        }
    }
}