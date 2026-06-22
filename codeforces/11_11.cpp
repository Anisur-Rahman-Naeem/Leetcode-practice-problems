#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, count = 0;
    bool ok;
    cin>>n;

    for (int month = 1; month <= n; month++)
    {
        string str_month = to_string(month);
        cin>>d;

        for (int day = 1; day <= d; day++)
        {
            string str_day = to_string(day);
            string result = str_month + str_day;

            for (char c : result)
            {
                ok = true;
                if (c != result[0])
                {
                    ok = false;
                    break;
                }
                
            }
            
            if (ok == true)
            {
                count++;
            }
            
        }
        
    }

    cout<<count;
    
}