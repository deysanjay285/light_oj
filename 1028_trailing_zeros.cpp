#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mx 1000100

bool arr[mx];
static ll prime[9*100000];

void seive()
{
    arr[1]=1;
    for(ll i=4; i<=mx; i+=2)
        arr[i]=1;
    for(ll i=3; i<=sqrt(mx); i+=2)
    {
        if(arr[i]==0)
        {
            for(ll j=3*i; j<=mx; j+=2*i)
            {
                arr[j]=1;
            }
        }
    }
}

ll factorization(ll n)
{

    ll flag=0,sum=1;
    for(ll i=1; prime[i]<=sqrt(n); i++)
    {
        flag=0;
        while(n%prime[i]==0)
        {
            flag++;
            n=n/prime[i];

        }
        if(flag>0)
        {
            sum=sum*(flag+1);
        }
        if(n==1||i==78504)
            break;

    }
    if(n!=1)
    {
        sum=sum*(1+1);
    }
    return sum;
}

int main()
{
    ll t,n,ans,cases=1,j=1;
    seive();
    for(ll i=1; i<=mx; i++)
        if(arr[i]==0)
            prime[j++]=i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=factorization(n);
        printf("Case %lld: %lld\n",cases++,ans-1);
    }
    return 0;
}
