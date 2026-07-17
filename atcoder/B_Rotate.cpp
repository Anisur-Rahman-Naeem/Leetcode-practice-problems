#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char A[105][105];
    char B[105][105];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = A[i][j];
        }
    }

    // Top row
    for (int j = 1; j < n; j++)
    {
        B[0][j] = A[0][j - 1];
    }

    // Right column
    for (int i = 1; i < n; i++)
    {
        B[i][n - 1] = A[i - 1][n - 1];
    }

    // Bottom row
    for (int j = 0; j < n - 1; j++)
    {
        B[n - 1][j] = A[n - 1][j + 1];
    }

    // Left column
    for (int i = 0; i < n - 1; i++)
    {
        B[i][0] = A[i + 1][0];
    }

    // Print answer
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << B[i][j];
        }
        cout << endl;
    }
}