#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<iterator>
#include<time.h>
#include<string.h>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)

int main()
{
    ll t,n,d,cases=1,m,p,k,i,sum;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&d);
        i=0;
        sum=0;
        p=d%n;
        m=1;
        while(true)
        {
            p=p*10%n;
            sum=(sum%n+p%n)%n;
            i++;
            if(sum==0)
                break;
        }
        printf("Case %lld: %lld\n",cases++,i);
    }
    return 0;
}

