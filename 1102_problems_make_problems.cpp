#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 2*1000010
#define mod 1000000007

ll arr[mx];

void pre()
{
    ll sum=1;
    arr[0]=1;
    for(ll i=1; i<mx; i++)
    {
        sum=(sum%mod*i%mod)%mod;
        arr[i]=sum;
    }
}

ll mod_inverse(ll a,ll b,ll *x,ll *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    ll x1,y1,temp;
    temp=b%a;
    ll d=mod_inverse(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    if(d<0)
        d=d*-1;
    return d;
}

int main()
{
    ll t,n,x,y,a,b,temp,temp1,temp2,cases=1,res;
    pre();
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        temp1=arr[a+b-1];
        temp2=(arr[b-1]%mod*arr[a]%mod)%mod;
        temp=mod_inverse(temp2,mod,&x,&y);
        if(x<0)
            x=x+mod;
        res=(temp1%mod*x%mod)%mod;
        if(res<0)
            res+=mod;
        printf("Case %lld: %lld\n",cases++,res%mod);
    }
    return 0;
}
