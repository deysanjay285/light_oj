#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,du,sum,cases=1;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        while(n--)
        {
            scanf("%lld",&du);
            if(du>0)
                sum+=du;
        }
        printf("Case %lld: %lld\n",cases++,sum);
    }
    return 0;
}
