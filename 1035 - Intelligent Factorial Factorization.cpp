#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll prime[50],arr[105];
static bool arr2[105];

void seive()
{
    ll rt=sqrt(104);
    arr2[1]=1;
    arr2[2]=0;
    arr2[3]=0;
    for(ll i=4; i<=104; i+=2)
    {
        arr2[i]=1;
    }
    for(ll i=3; i<=rt; i+=2)
    {
        if(arr2[i]==0)
        {
            for(ll j=3*i; j<=100; j+=2*i)
            {
                arr2[j]=1;
            }
        }
    }
}

int main()
{
    ll k=0;
    seive();
    for(ll i=1;i<=104;i++)
        if(arr2[i]==0)
            prime[k++]=i;
    ll n,t,cases=1,rec,c=0,sum=1,i;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld",&n);
        for(i=0; prime[i]<=n; i++)
        {
            sum=1;
            c=0;
            ll temp_n=n;
            ll temp_prime=prime[i];
            while(sum)
            {
                sum=temp_n/temp_prime;
                c+=sum;
                temp_prime*=prime[i];
            }
            arr[i]=c;
        }
        printf("Case %lld: %lld =",cases++,n);
        for(ll j=0;j<i;j++)
        {
            printf(" %lld (%lld)",prime[j],arr[j]);
            if(j!=(i-1))
                printf(" *");
        }
        printf("\n");

    }

    return 0;
}
