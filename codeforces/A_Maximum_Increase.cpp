#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int left = 0;
    int right = 0;
    int mxlen = 0;
    int j;

    vector<int> arr(input);

    for (int i = 0; i < input; i++)
    {
        cin >> arr[i];
    }
    for (j = 1; j < input; j++)
    {
        if (arr[j] <= arr[j - 1])
        {
            right = j - 1;
            mxlen = max(mxlen, (right - left) + 1);
            left = j;
        }
    }
    right = j-1;
    mxlen = max(mxlen, (right - left) + 1);

    cout<<mxlen<<endl;
}