#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, b, p, f, h, c;
    cin >> t;

    while (t--)
    {
        int maximum_profit = 0;
        cin >> b >> p >> f >> h >> c;
        int buns_available = b / 2;
        if (h > c)
        {
            int hamburgers = min(p, buns_available);
            int remaining_buns = buns_available - hamburgers;
            int chickenBurgers = min(f, remaining_buns);
            maximum_profit = (hamburgers * h) + (chickenBurgers * c);
            cout << maximum_profit << endl;
        }
        else if (c > h)
        {
            int chickenBurgers = min(f, buns_available);
            int remaining_buns = buns_available - chickenBurgers;
            int hamburgers = min(p, remaining_buns);
            maximum_profit = (hamburgers * h) + (chickenBurgers * c);
            cout << maximum_profit << endl;
        }
        else
        {
            int chickenBurgers = min(f, buns_available);
            int remaining_buns = buns_available - chickenBurgers;
            int hamburgers = min(p, remaining_buns);
            maximum_profit = (hamburgers * h) + (chickenBurgers * c);
            cout << maximum_profit << endl;
        }
    }
    return 0;
}