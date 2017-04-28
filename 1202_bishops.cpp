#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<iterator>
#include<math.h>

using namespace std;

#define ll long long int
#define ull unsigned long long int

int main()
{
    ll t,r1,r2,c1,c2,i,j,dif1,dif2,temp,cases=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&r1,&c1,&r2,&c2);
        dif1=abs(r2-r1);
        dif2=abs(c2-c1);
        printf("Case %lld: ",cases++);
        if(dif1==dif2)
        {
            printf("1\n");
            continue;
        }
        temp=abs(dif2-dif1);
        if(temp%2==0)
            printf("2\n");
        else printf("impossible\n");

    }
    return 0;
}
