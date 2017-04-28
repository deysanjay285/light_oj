#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,cases=1,rt,sum;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        rt=sqrt(n);
        sum=0;
        for(ll i=1;i<=rt;i++)
            sum=sum+n/i;
        for(ll i=1;i<=rt;i++)
        {
            sum=sum+(n/i-n/(i+1))*i;
        }
        if(rt==n/rt)
            sum=sum-rt;
        printf("Case %lld: %lld\n",cases++,sum);



    }
    return 0;
}
