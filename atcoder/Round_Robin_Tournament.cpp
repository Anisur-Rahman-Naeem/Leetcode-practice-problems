#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main()
{
    int N;
    cin >> N;

    string arr[N] = {};
    pair<int, int> ans[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        string curr = arr[i];
        int wins = 0;

        for (int j = 0; j < N; j++)
        {
            if (curr[j] == 'o')
            {
                wins++;
            }
        }
        ans[i] = {i + 1, wins};
    }

    sort(ans, ans + N, cmp);

    for (auto p : ans)
    {
        cout << p.first << " ";
    }
}