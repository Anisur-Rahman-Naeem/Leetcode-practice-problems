#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                string result = s[i] + s[j];
                bool isPalindrome = true;
                int m = result.length();
                for (int k = 0; k < m; k++)
                {
                    if (result[k] != result[m - 1 - k])
                    {
                        isPalindrome = false;
                        break;
                    }
                }
                if (isPalindrome)
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }
                
            }
        }
    }

    cout << "No" << endl;
}