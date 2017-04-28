#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000005

static bool arr[mx];
ll prime[100005];

ll seive()
{
    ll rt=sqrt(mx),k=0;
    arr[1]=1;
    for(ll i=4; i<mx; i+=2)
        arr[i]=1;
    for(ll i=3; i<=rt; i+=2)
    {
        if(arr[i]==0)
        {
            for(ll j=3*i; j<mx; j+=2*i)
            {
                arr[j]=1;
            }
        }
    }


    for(ll i=1; i<mx; i++)
        if(arr[i]==0)
        {
            prime[k++]=i;
        }
    return k;
}

ll power(ll base,ll pow)
{
    ll y,ret;
    if(pow==0)
        return 1;
    else if(pow%2==0)
    {
        y=power(base,pow/2);
        ret=y*y;
    }
    else
    {
        y=power(base,pow/2);
        ret=y*y*base;
    }
    return ret;
}

int main()
{
    ll k,c,res,ans;
    k=seive();
    ll t,n,cases=1,pri[100000],sum=0;
    scanf("%lld",&t);
    while(t--)
    {
        ll p=0;
        res=1;
        scanf("%lld",&n);
        for(ll i=0; i<k; i++)
        {
            c=0;
            ll temp_n=n;
            while(temp_n%prime[i]==0)
            {
                c++;
                temp_n/=prime[i];
            }

            if(c>0)
            {
                //cout<<prime[i]<<" "<<c+1<<endl;
                ans=power(prime[i],c+1);
                res*=(ans-1);
                pri[p++]=prime[i];
            }
            if(n==1)
                break;
        }
        if(n!=1)
        {
            ans=n*n-1;
            res*=ans;

        }
        ans=1;
        for(ll i=0; i<p; i++)
        {
            ans*=(pri[i]-1);
        }
        //cout<<res<<" "<<ans<<endl;
        res=res/ans;

        printf("Case %lld: %lld\n",cases++,res);

    }
    return 0;
}
