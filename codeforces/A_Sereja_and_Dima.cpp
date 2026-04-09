#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // input number of elements

    vector<int> v(n); // create vector of size n

    // take input elements into vector
    for (int i = 0; i < n; i++) cin >> v[i];

    int s = 0, d = 0; // s = score of first player, d = score of second player
    int f1 = 1;       // flag to track whose turn it is (1 = first player, 2 = second player)

    // loop until all elements are removed from vector
    while (!v.empty())
    {
        if (f1 == 1) // first player's turn
        {
            // choose the larger value between front and back
            if (v[0] > v.back())
            {
                s += v[0];            // add front value to first player's score
                v.erase(v.begin());  // remove front element (costly O(n))
            }
            else
            {
                s += v.back(); // add back value
                v.pop_back();  // remove back element (O(1))
            }

            f1 = 2; // switch turn to second player
        }
        else // second player's turn
        {
            // same logic as first player
            if (v[0] > v.back())
            {
                d += v[0];
                v.erase(v.begin());
            }
            else
            {
                d += v.back();
                v.pop_back();
            }

            f1 = 1; // switch back to first player
        }
    }

    // output final scores of both players
    cout << s << " " << d << endl;
}