#include<stdio.h>
#include<iostream>
#include<time.h>
#include<algorithm>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<iterator>
#include<math.h>
#include<set>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)

int main()
{
    ll t,cases=1,n,a,s;
    double arr[110];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll i=0;
        s=0;
        while(n--)
        {
            scanf("%lf",&arr[i++]);
        }
        for(ll j=0;j<i;j++)
        {
            if(j==0)
            {
                s=s+ceil((arr[j]-2)/5);
            }
            else s=s+ceil((arr[j]-arr[j-1])/5);

        }
        printf("Case %lld: %lld\n",cases++,s);


    }
    return 0;
}
