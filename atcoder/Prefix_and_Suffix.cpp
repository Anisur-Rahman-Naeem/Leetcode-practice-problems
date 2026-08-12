#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    string S, T;
    cin >> S >> T;

    bool prefix = (T.substr(0, N) == S);
    bool suffix = (T.substr(M - N, N) == S);

    if (prefix && suffix)
    {
        cout << "0" << endl;
    }
    else if (prefix)
    {
        cout << "1" << endl;
    }
    else if (suffix)
    {
        cout << "2" << endl;
    }
    else
    {
        cout << "3" << endl;
    }
}