#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<bitset>
#include<iterator>
#include<algorithm>

using namespace std;

#define ll long long int
#define unsigned long long int
#define pi 2*acos(0.0)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mx 1000000

static bool arr[mx+1000],ar[mx+1000];
ll prime[mx+1000],arr2[mx];

void seive()
{
    ll rt,j=0;
    rt=sqrt(mx);
    arr[1]=true;
    for(ll i=2; i<=rt; i++)
    {
        if(arr[i]==1)
            continue;
        for(ll j=1; j*i<=mx; j++)
        {
            if(j==1)
                continue;
            arr[i*j]=1;
        }
    }
}

ll segmented_seive(ll m,ll n)
{
    ll rt=0,temp=0,ret=0,j=0,p=0;
    for(ll i=0; i<mx+10; i++)
        ar[i]=0;
    double t;
    if(n>3)
        rt=sqrt(n);
    else rt=n;
    //separate_prime_to_square_root_of_n & assign into an array
    for(ll i=1; i<=rt; i++)
    {
        if(arr[i]==0)
        {
            prime[j++]=i;
        }
    }

    //create seive from m to n
    for(ll i=0; i<j; i++)
    {
        temp=m;
        t=(double)temp/prime[i];
        if(m<=prime[i])
        {
            temp=2;
            if(i==0)
                ret=2;
        }
        else if(i>0)
        {
            temp=ceil(t);
        }
        else
        {
            temp=floor(t);
            ret=temp*prime[i];
        }
        temp=temp*prime[i];
        for(ll k=temp; k<=n; k=k+prime[i])
        {
            ar[k-ret]=1;
        }
    }
    return ret;
}

int main()
{
    ll m,n,start,t,cases=1,c;
    seive();
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        scanf("%lld %lld",&m,&n);
        if(m==1&&n==1)
        {
            printf("Case %lld: 0\n",cases++);
            continue;
        }
        start=segmented_seive(m,n);
        for(ll i=m; i<=n; i++)
            if(ar[i-start]==0&&i!=1)
                c++;
        printf("Case %lld: %lld\n",cases++,c);
    }


    return 0;
}
