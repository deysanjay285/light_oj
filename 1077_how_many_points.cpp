#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}


int main()
{
    ll t,ax,ay,bx,by,cases=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&ax,&ay,&bx,&by);
        printf("Case %lld: %lld\n",cases++,gcd(abs(ax-bx),abs(ay-by))+1);
    }
    return 0;
}
