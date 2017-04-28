#include<bits/stdc++.h>
using namespace std;

#define ll long long



ll power(ll base,ll pow,ll mod)
{
    ll int y,ret;
    if(pow==0)
        return 1;
    else if(pow%2==0)
    {
        y=power(base,pow/2,mod);
        ret=(y%mod*y%mod)%mod;
    }
    else
    {
        y=power(base,pow/2,mod);
        ret=((y%mod*y%mod)%mod*base%mod)%mod;
    }
    return ret%mod;
}

int main()
{
    ll n,k,arr[1005],t,mod,res,ans,cases=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n,&k,&mod);
        res=0;
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            res=(res%mod+arr[i]%mod)%mod;
        }
        ans=power(n,k-1,mod);
        ans=((ans%mod*res%mod)%mod*k%mod)%mod;
        printf("Case %lld: %lld\n",cases++,ans);
    }
    return 0;
}
