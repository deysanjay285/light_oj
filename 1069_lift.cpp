#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,a,b,diff,time,caseno=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        diff=abs(a-b);
        time=diff*4+3+5+3+a*4+3+5;
        printf("Case %lld: %lld\n",caseno++,time);

    }
    return 0;
}
