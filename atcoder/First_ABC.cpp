#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0, n;
    cin >> n;

    bool aSeen = false, bSeen = false, cSeen = false;

    string input;
    cin >> input;

    for (auto c : input)
    {
        if (c == 'A')
        {
            
            aSeen = true;
            count++;
            if ((aSeen == true) && (bSeen == true) && (cSeen == true))
            {
                cout << count;
                return 0;
            }
        }
        else if (c == 'B')
        {
            bSeen = true;
            count++;
            if ((aSeen == true) && (bSeen == true) && (cSeen == true))
            {
                cout << count;
                return 0;
            }
        }
        else if (c == 'C')
        {
            cSeen = true;
            count++;
            if ((aSeen == true) && (bSeen == true) && (cSeen == true))
            {
                cout << count;
                return 0;
            }
        }
        else
        {
            count++;
            if ((aSeen == true) && (bSeen == true) && (cSeen == true))
            {
                cout << count;
                return 0;
            }
        }
    }
}