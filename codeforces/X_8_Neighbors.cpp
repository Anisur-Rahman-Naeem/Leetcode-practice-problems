#include <iostream>
using namespace std;

int main()
{
    int n, m, r, c;
    char arr[101][101] = {};
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    cin >> r >> c;
    r--;
    c--;
    bool allX = true;

    if (r - 1 >= 0)
    {
        if (arr[r - 1][c] != 'x')
            allX = false;
        if (c - 1 >= 0)
        {
            if (arr[r - 1][c - 1] != 'x')
                allX = false;
        }
        if (c + 1 <= m)
        {
            if (arr[r - 1][c + 1] != 'x')
                allX = false;
        }
    }
    if (r + 1 <= n)
    {
        if (arr[r + 1][c] != 'x')
            allX = false;
        if (c - 1 >= 0)
        {
            if (arr[r + 1][c - 1] != 'x')
                allX = false;
        }
        if (c + 1 <= m)
        {
            if (arr[r + 1][c + 1] != 'x')
                allX = false;
        }
    }
    if (c - 1 >= 0)
    {
        if (arr[r][c - 1] != 'x')
            allX = false;
    }
    if (c + 1 <= m)
    {
        if (arr[r][c + 1] != 'x')
            allX = false;
    }

    if (allX)
    {
        cout<<"yes"<<endl;
    }else
    {
        cout<<"no"<<endl;
    }
    
    return 0;
}