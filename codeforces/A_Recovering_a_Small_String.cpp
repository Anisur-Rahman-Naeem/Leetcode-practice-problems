#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int input;
        cin >> input;
        input -= 3;
        string str = "aaa";

        for (int i = 2; i >= 0; i--)
        {
            int temp = min(25, input);
            str[i] += temp;
            input -= temp;
        }
        cout << str << endl;
    }
}