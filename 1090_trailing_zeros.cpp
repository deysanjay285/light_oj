#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll trailing_zero(ll n,ll n1)
{
    double temp;
    ll sum1=0,t;
    while(n)
    {
        temp=double(n/n1);
        n=floor(temp);
        sum1=sum1+n;
    }
    return sum1;
}

ll prime_fact(ll n,ll n1)
{
    ll c=0;
    while(n%n1==0&&n!=0)
    {
        n=n/n1;
        c++;
    }
    return c;
}

int main()
{
    ll t,n,r,p,q,a2,b2,c2,d2,a5,b5,c5,d5,cases=1,sum2,sum5,sum;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld %lld %lld %lld",&n,&r,&p,&q);
        a2=trailing_zero(n,2);
        b2=trailing_zero(n-r,2);
        c2=trailing_zero(r,2);
        d2=prime_fact(p,2)*q;

        sum2=a2-b2-c2+d2;

        a5=trailing_zero(n,5);
        b5=trailing_zero(n-r,5);
        c5=trailing_zero(r,5);
        d5=prime_fact(p,5)*q;
        sum5=a5-b5-c5+d5;

        if(sum2<sum5)
            sum=sum2;
        else sum=sum5;


        printf("Case %lld: %lld\n",cases++,sum);
    }
    return 0;
}
