#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    char number[10];
    scanf("%s",number);
    for (int i = 0; number[i] != '\0'; i++)
    {
        if (number[i] >= '5' && number[i] <= '9')
        {
            if (i == 0 && number[i] == '9') continue;
            int digit = number[i] - '0';
            digit = 9 - digit;
            number[i] = '0' + digit;
        }
        
    }
    printf("%s",number);
    return 0;
}