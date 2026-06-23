#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, product = 1;

    cin >> t;

    while (t--)
    {
        product = 1;
        cin >> n;

        int arr[n] = {};

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int length = sizeof(arr) / sizeof(arr[0]);

        int minValIndex = min_element(arr, arr + length) - arr;

        arr[minValIndex]++;

        for (int element : arr)
        {
            product *= element;
        }

        cout << product << endl;
    }
}
