#include<bits/stdc++.h>
using namespace std;

double arr[1005000],sum=0.0;

int main()
{
    long long int t,n,b,i,j,digit,bc,cases=1;
    double a,q;
    for(i=0;i<1005000;i++)
    {
        sum=sum+log10(i+1);
        arr[i]=sum;
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&b);
        a=arr[n-1]/log10(b);
        digit=floor(a)+1;
        printf("Case %lld: %lld\n",cases++,digit);
    }
    return 0;
}
