#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long int
#define mx 5*1000100

ll arr[mx],c=2,pri[4*100000],sum1=0;
static bool prime[mx];

void seive()
{
    ll rt=sqrt(mx);
    prime[1]=1;
    for(ll i=4; i<=mx; i+=2)
        prime[i]=1;
    for(ll i=3; i<=rt; i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=3*i; j<=mx; j+=2*i)
            {
                prime[j]=1;
            }
        }
    }
}

void prime_factorization(ll n)
{
    ll t=n,flag,i,temp;
    double sum=1.0;
    if(prime[n]==0)
    {
        sum1=sum1+(n-1)*(n-1);
        arr[c++]=sum1;
        return;
    }
    for(i=1; pri[i]<=sqrt(t); i++)
    {
        flag=0;
        while(n%pri[i]==0)
        {
            flag=1 ;
            n=n/pri[i];
        }
        if(flag==1)
        {
            sum=(double)sum*(1-(double)1/pri[i]);
            if(prime[n]==0)
            {
                sum=(double)sum*(1-(double)1/n);
                break;
            }
        }
        if(n==1)
            break;
    }
    temp=round(t*sum);
    sum1=sum1+temp*temp;
    arr[c++]=sum1;
}


int main()
{
    ll t,a,b,j=1,cases=1;
    seive();
    for(ll i=1; i<=mx; i++)
    {
        if(prime[i]==0)
            pri[j++]=i;
    }
    for(ll i=2; i<=mx; i++)
    {
        prime_factorization(i);
    }
    arr[1]=0;
    t=10000;
//    scanf("%lu",&t);
    while(t--)
    {
//        scanf("%lu %llu",&a,&b);
//        printf("Case %lu: %lu\n",cases++,arr[b]-arr[a-1]);
    }
    return 0;
}
