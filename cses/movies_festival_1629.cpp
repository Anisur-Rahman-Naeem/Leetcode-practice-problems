#include<bits/stdc++.h>   // Includes almost all standard C++ libraries
using namespace std;

int main(){
    ios::sync_with_stdio(false);  // Makes cin/cout faster (important for large input)
    cin.tie(NULL);                // Prevents automatic flushing before cin (extra speed)

    int n;
    cin >> n;   // Number of movies

    // Vector of pairs:
    // Each element = {start_time, end_time}
    // pair.first  -> start time
    // pair.second -> end time
    vector<pair<long long, long long>> movies;

    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;

        // Store movie as (start, end)
        movies.push_back({a, b});
    }

    // Sorting movies by END TIME (Greedy priority)
    // Lambda function compares two movies x and y
    // x.second = end time of movie x
    // y.second = end time of movie y
    // We want smaller ending time first
    sort(movies.begin(), movies.end(), [](auto &x, auto &y){
        return x.second < y.second;   // IMPORTANT: second is a variable, not a function
    });
    
    long long lastEnd = 0;  // Stores end time of last selected movie
    int count = 0;          // Counts how many movies we can watch

    // Loop through sorted movies
    for (auto movie : movies)
    {
        // movie.first  -> start time
        // movie.second -> end time

        // If current movie starts AFTER or AT the end of last selected movie
        if (movie.first >= lastEnd)
        {
            count++;                // Select this movie
            lastEnd = movie.second; // Update last ending time
        }
    }
    
    cout << count << endl;  // Print maximum number of movies

    return 0;
}
