#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[101],y[101];

    for (int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i];
    }

    int max_sq_distance = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int current_sq_distance = ((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i] - y[j]));
            max_sq_distance = max(max_sq_distance, current_sq_distance);
        }
        
    }

    printf("%.10lf\n",sqrt(max_sq_distance));

    return 0;
}