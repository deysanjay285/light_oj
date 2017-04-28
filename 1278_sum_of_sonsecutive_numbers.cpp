#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 10000070

bool arr[10000070];
ll prime[1000010];


void seive()
{
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;
    ll rt=sqrt(mx),k=1;
    for( ll i=4;i<=mx;i+=2)
        arr[i]=1;
    for(ll i=3;i<=rt;i+=2)
    {
        if(arr[i]==0)
        {
            for(ll j=3*i;j<=mx;j+=2*i)
                arr[j]=1;
        }
    }
    for(ll i=1;i<=mx;i++)
        if(arr[i]==0)
        prime[k++]=i;
}


int main()
{
    ll t,n,a,rt,temp2,sum,i,j,k,c,flr,cil,cases=1;
    seive();
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        rt=sqrt(n);
        for(ll i=1;i<=rt)
        printf("Case %lld: %lld\n",cases++,c);
    }
    return 0;
}
