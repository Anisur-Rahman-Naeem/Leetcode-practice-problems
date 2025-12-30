#include <iostream>
using namespace std;

int main()
{
    long long prev_val, curr_val;
    prev_val = curr_val = INT32_MIN;
    bool flag = true;
    for (int i = 0; i < 8; i++)
    {
        cin >> curr_val;
        if ((curr_val >= 100 && curr_val <= 675) && curr_val % 25 == 0)
        {
            if (curr_val >= prev_val)
            {
                prev_val = curr_val;
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}