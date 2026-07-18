#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool isValid = true;
    int arr[9][9] = {};
    int freq[10] = {};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Condition 1
    for (int i = 0; i < 9; i++)
    {
        fill(freq, freq + 10, 0);
        for (int j = 0; j < 9; j++)
        {
            if (freq[arr[i][j]] < 1)
            {
                freq[arr[i][j]]++;
            }
            else
            {
                isValid = false;
                break;
            }
        }
        if (isValid == false)
        {
            break;
        }
    }

    // Condition 2
    if (isValid == true)
    {
        for (int i = 0; i < 9; i++)
        {
            fill(freq, freq + 10, 0);
            for (int j = 0; j < 9; j++)
            {
                if (freq[arr[j][i]] < 1)
                {
                    freq[arr[j][i]]++;
                }
                else
                {
                    isValid = false;
                    break;
                }
            }
            if (isValid == false)
            {
                break;
            }
        }
    }

    // Condition 3
    if (isValid == true)
    {
        for (int boxRow = 0; boxRow < 3; boxRow++)
        {
            for (int boxCol = 0; boxCol < 3; boxCol++)
            {
                fill(freq, freq + 10, 0);
                int startRow = boxRow * 3;
                int startCol = boxCol * 3;

                for (int i = startRow; i < startRow + 3; i++)
                {
                    for (int j = startCol; j < startCol + 3; j++)
                    {
                        if (freq[arr[i][j]] < 1)
                        {
                            freq[arr[i][j]]++;
                        }
                        else
                        {
                            isValid = false;
                            break;
                        }
                    }
                    if (isValid == false)
                    {
                        break;
                    }
                }
            }
        }
    }

    if (isValid == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}