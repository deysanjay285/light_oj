#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 100005

ll smallest(ll arr[],ll low,ll high)
{
    if(low==high)
        return arr[low];
    ll mid=(low+high)/2;
    ll left=smallest(arr,low,mid);
    ll right=smallest(arr,mid+1,high);
    return min(left,right);
}

int main()
{
    ll n,q,i,j,t,cases=1,arr[mx];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&q);
        for(i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        printf("Case %lld:\n",cases++);
        for(ll k=0;k<q;k++)
        {
            scanf("%lld %lld",&i,&j);
            printf("%lld\n",smallest(arr,i-1,j-1));
        }
        for(ll i=0;i<n;i++)
            arr[i]=0;
    }
    return 0;
}
