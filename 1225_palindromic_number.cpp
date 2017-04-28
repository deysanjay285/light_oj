#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<iterator>
#include<time.h>
#include<iostream>
#include<time.h>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)

void string_reverse(char* beginx)
{
    char temp;
    char* endx;
    endx = beginx + strlen(beginx)-1;

    while(endx>beginx)
    {
        temp = *endx;
        *endx = *beginx;
        *beginx = temp;
        endx--;
        beginx++;
    }
}


int main()
{
    char n[100],temp[100];

    ll t,cases=1;
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        scanf("%s",n);
        strcpy(temp,n);
        string_reverse(n);
        printf("Case %lld: ",cases++);
        if(strcmp(n,temp)==0)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
