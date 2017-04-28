#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    else gcd(b,a%b);
}

long long int lcm(long long int a,long long int b)
{
    return (b*(a/gcd(a,b)));
}

int main()
{
    ll t,a,b,l,d,g,cases=1,k,i,L;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&L);
        g=gcd(a,b);
        k=L/(a*b);
        if(L%(a*b/g)!=0)
            printf("Case %lld: impossible\n",cases++);
        else
        {
            l=lcm(a,b);
            l=lcm(l,L);
            printf("Case %lld: %lld\n",cases++,l);
        }


    }
    return 0;
}
