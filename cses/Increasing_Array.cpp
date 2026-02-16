#include<bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main(){
    long long n;
    cin >> n;  
    // Read size of array
    // long long used because constraints can be large (up to 2e5 elements)

    vector<long long> arr(n);
    // Store elements in long long
    // Important: x[i] can be up to 1e9

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Input array elements

    long long moves = 0;
    // This will store total increments required
    // Must be long long because total moves can exceed int range

    long long max = arr[0];
    // CRITICAL POINT:
    // This keeps track of the maximum value seen so far.
    // We ensure every next element is >= this value.

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < max)
        {
            // If current element is smaller than previous maximum,
            // we must increase it to 'max'
            
            moves += (max - arr[i]);
            // Add the required increments to total moves
        }
        else
        {
            // If current element is already >= max,
            // update max to this new value
            
            max = arr[i];
        }
    }

    cout << moves;
    // IMPORTANT:
    // We must print the result.
    // Returning moves would not print anything.

    return 0;
}
