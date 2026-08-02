#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    string vowel = "aeiou";

    for (auto c : input)
    {
        if (vowel.find(c) == string::npos)
        {
            cout << c;
        }
    }
}