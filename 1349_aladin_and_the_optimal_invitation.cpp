#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<bitset>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front

ll arr_u[50100],arr_v[50100];

ll value_x(ll n,ll data_set)
{
    ll sum=0;
    for(ll i=0;i<data_set;i++)
    {
        sum=sum+abs(arr_u[i]-n);
    }
    return sum;
}

ll value_y(ll n,ll data_set)
{
    ll sum=0;
    for(ll i=0;i<data_set;i++)
    {
        sum=sum+abs(arr_v[i]-n);
    }
    return sum;
}

ll binary_x(ll maxx,ll minx,ll data_set)
{
    ll mid,mid_1,mid_0,value_mid,value_mid_1,value_mid_0;
    mid=(maxx+minx)/2;
    mid_1=mid+1;
    mid_0=mid-1;

    value_mid=value_x(mid,data_set);
    value_mid_1=value_x(mid,data_set);
    value_mid_0=value_x(mid,data_set);


    if(value_mid==value_mid_1)
        return mid;
    else if(value_mid>value_mid_1)
    {
        minx=mid=1;
        binary_x(maxx,minx,data_set);
    }
    else
    {
        maxx=mid-1;
         binary_x(maxx,minx,data_set);
    }
}

ll binary_y(ll max_y,ll min_y,ll data_set)
{
    ll mid,mid_1,mid_0,value_mid,value_mid_1,value_mid_0;
    mid=(max_y+min_y)/2;
    mid_1=mid+1;
    mid_0=mid-1;

    value_mid=value_y(mid,data_set);
    value_mid_1=value_y(mid,data_set);
    value_mid_0=value_y(mid,data_set);

    if(value_mid==value_mid_1)
        return mid;
    else if(value_mid>value_mid_1)
    {
        min_y=mid-1;
         binary_y(max_y,min_y,data_set);
    }
    else
    {
        max_y=mid-1;
        binary_y(max_y,min_y,data_set);
    }

}

int main()
{
    ll t,cases=1,m,n,q,u,v,w,mid,max_x,max_y,min_x,min_y,temp_x,temp_y,x,y;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&m,&n,&q);
        for(ll i=0;i<q;i++)
        {
            scanf("%lld %lld %lld",&u,&v,&w);
            arr_u[i]=u;
            arr_v[i]=v;
            if(i==0)
            {
                temp_x=u;
                temp_y=v;
            }
            max_x=max(temp_x,u);
            min_x=min(temp_x,u);
            max_y=max(temp_y,v);
            min_y=min(temp_y,v);
        }
        x=binary_x(max_x,min_x,q);
        y=binary_y(max_y,min_y,q);
        cout<<x<<" "<<y<<endl;;


    }
    return 0;
}
