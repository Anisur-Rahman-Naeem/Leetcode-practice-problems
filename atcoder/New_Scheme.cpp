#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {};
    bool isCorrect = false;

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < 8; i++)
    {
        if ((arr[0] >= 100 && arr[0] <= 675) && (arr[0] % 25 == 0))
        {
            if ((arr[i] >= arr[i - 1]) && (arr[i] <= 675 && arr[i] >= 100) && (arr[i] % 25 == 0))
            {
                isCorrect = true;
            }
            else
            {
                isCorrect = false;
                break;
            }
        }
        else
        {
            isCorrect = false;
            break;
        }
    }

    if (isCorrect)
    {
        cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }
    
    
}