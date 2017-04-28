#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mx 10000010

static bool arr[mx];
ll prime[1000000];

void seive()
{
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;

    ll rt=sqrt(mx),k=1;
    for(ll i=4; i<=mx; i+=2)
        arr[i]=1;
    for(ll i=3; i<=rt; i+=2)
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


int main()
{
    ll i,t,ntemp1,temp2,c,cases=1,end,k=1;
    seive();
    for(ll i=1; i<mx; i++)
        if(arr[i]==0)
        {
            prime[k++]=i;
        }

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        c=0;
        for(i=1; prime[i]<=n/2; i++)
        {
            temp1=prime[i];
            temp2=n-prime[i];
            if(arr[temp2]==0)
            {
                c++;
            }

        }
        printf("Case %lld: %lld\n",cases++,c);
    }
    return 0;
}
