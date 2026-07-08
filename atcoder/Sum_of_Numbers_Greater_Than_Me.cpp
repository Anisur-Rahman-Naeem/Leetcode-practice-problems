#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n] = {};
    int sortedArr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sortedArr[i] = arr[i];
    }

    sort(sortedArr, sortedArr + n);

    long long suffix[n + 1];
    suffix[n] = 0;

    for (int i = n - 1 ; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + sortedArr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int pos = upper_bound(sortedArr, sortedArr + n, arr[i]) - sortedArr;
        cout << suffix[pos] << " ";
    }

    return 0;
}