#include <iostream>
using namespace std;
int main()
{
    int n, k, m, a, sum = 0;
    cin >> n >> k >> m;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        sum += a;
    }

    int result = m * n - sum;

    if (result > k)
    {
        cout << "-1" << endl;
    }
    else if (result < 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout<<result<<endl;
    }
    return 0;
}