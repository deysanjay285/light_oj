#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 100000000

double arr[100100];

void pre_cal()
{
    ll k=0;
    arr[k++]=0.0;
    double sum=0;
    for(ll i=1;i<=mx;i++)
    {
        sum=sum+(double)1/i;
        if(i%1000==0)
        {
            arr[k++]=sum;
        }
    }
}


int main()
{
    pre_cal();
    ll t,n,cases=1,temp1,temp2,start;

    double sum=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum=0;
        temp1=n/1000;
        temp2=n%1000;
        for(ll i=temp1*1000+1;i<=(temp1*1000+temp2);i++)
        {
            sum=sum+(double)1/i;
        }
        sum=arr[temp1]+sum;
        printf("Case %lld: %0.10lf\n",cases++,sum);
    }
    return 0;
}
