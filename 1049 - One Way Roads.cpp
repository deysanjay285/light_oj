#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 105





int main()
{

    bool right[mx];
    bool left[mx];
    ll t,n,a,b,c,wght_left,wght_right,cases=1;
    scanf("%lld",&t);
    while(t--)
    {
        memset(left,0,sizeof(left));
        memset(right,0,sizeof(right));
        wght_left=0;
        wght_right=0;
        scanf("%lld",&n);
        for(ll i=0; i<n; i++)
        {
            scanf("%lld %lld %lld",&a,&b,&c);
            if(!left[a]&&!right[b])
            {
                left[a]=right[b]=true;
                wght_left+=c;
            }
            else
            {
                right[a]=left[b]=true;
                wght_right+=c;
            }

        }
        printf("Case %lld: %lld\n",cases++,min(wght_left,wght_right));

    }
    return 0;
}
