#include <map>
#include<iostream>
using namespace std;
int main(){
    char s1,s2,t1,t2;
    int result_s, result_t;
    cin>>s1>>s2>>t1>>t2;
    map<char, int> values = {
        {'A',0},
        {'B',1},
        {'C',2},
        {'D',3},
        {'E',4},
    };
    if (abs(values[s2] - values[s1]) > 2)
    {
        result_s = 5 - abs(values[s2] - values[s1]);
    }else
    {
        result_s = abs(values[s2] - values[s1]);
    }
    if (abs(values[t2] - values[t1]) > 2)
    {
        result_t = 5 - abs(values[t2] - values[t1]);
    }else
    {
        result_t = abs(values[t2] - values[t1]);
    }

    if (result_s == result_t)
    {
        cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }
    
    return 0;
}