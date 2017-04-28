#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll decimel_to_binary(ll n)
{
    if(n==0)
        return 0;
    else
    {
        return (n%2+10*decimel_to_binary(n/2));
    }
}

int main()
{
    ll t,a1,b1,c1,d1,a2,b2,c2,d2,cases=1;
    //cout<<decimel_to_binary(8)<<endl;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld.%lld.%lld.%lld",&a1,&b1,&c1,&d1);
        a1=decimel_to_binary(a1);
        b1=decimel_to_binary(b1);
        c1=decimel_to_binary(c1);
        d1=decimel_to_binary(d1);
        scanf("%lld.%lld.%lld.%lld",&a2,&b2,&c2,&d2);
        if(a1==a2&&b1==b2&&c1==c2&&d1==d2)
            printf("Case %lld: Yes\n",cases++);
        else printf("Case %lld: No\n",cases++);

    }
    return 0;
}
