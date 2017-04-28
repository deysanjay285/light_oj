#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000010
#define m 1000003

ll n_fact[mx];

ll inverse_modulo(ll a,ll b,ll *x,ll *y)
{
    ll t;
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }c
    ll x1,y1,temp;
    temp=b%a;
    ll d=inverse_modulo(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    t=*x;
    if(d<0)
        d=d*-1;
    return d;
}


int main()
{
    ll t,n,x,y,a,b,sum=1,r,temp1,temp2,cases=1;
    n_fact[0]=1;
    for(ll i=1;i<=mx;i++)
    {
        sum=(sum%m*i%m)%m;
        n_fact[i]=sum;
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&r);
        temp1=(n_fact[r]%m*n_fact[n-r]%m)%m;
        temp2=inverse_modulo(temp1,m,&x,&y);
        if(x<0)
            x+=m;
        sum=(n_fact[n]%m*x%m)%m;
        printf("Case %lld: %lld\n",cases++,sum);
    }
    return 0;
}
