#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;

    int A[n] = {};
    int X[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] <= l)
        {
            X[i] = l;
        }
        else if ((A[i] >= l) && (A[i] <= r))
        {
            X[i] = A[i];
        }
        else if (A[i] >= r)
        {
            X[i] = r;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << X[i] << " ";
    }
}