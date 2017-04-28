#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<iterator>
#include<stdlib.h>
#include<math.h>
#include<time.h>

using namespace std;

#define ll long long int
#define ull unsingned long long int
#define pi 2*acos(0.0)


int main()
{
    ll t,n,p,q,arr[100],i,j,cases=1,sum,maxx;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        maxx=0;
        scanf("%lld %lld %lld",&n,&p,&q);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
            sum=sum+arr[i];
            if(sum<=q&&i<p)
            {
                maxx=i+1;
            }

        }
        printf("Case %lld: %lld\n",cases++,maxx);
    }
    return 0;
}
