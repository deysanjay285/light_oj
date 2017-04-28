#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<iterator>

using namespace std;

#define ll long long
#define llu unsingned long long int

unsigned ll power(unsigned ll base,unsigned ll pow)
{
    ll y,ret;
    if(pow==0)
        return 1;
    else if(pow%2==0)
    {
        y=power(base,pow/2);
        ret=y*y;
    }
    else
    {
        y=power(base,pow/2);
        ret=y*y*base;
    }
    return ret;
}

int main()
{
    unsigned ll t,w,temp,temp1,cases=1,flag,flag2,c,arr[100],    i=63;
    c=0;
    while(i>0)
    {
        temp=power(2,i);
        arr[c++]=temp;
        i--;
    }
    scanf("%llu",&t);
    flag=0;
    while(t--)
    {
        scanf("%llu",&w);
        flag=0;
        for(ll i=0;i<63;i++)
        {
            if(w%arr[i]==0)
            {
                flag=1;
                printf("Case %lld: %lld %lld\n",cases++,w/arr[i],arr[i]);
                break;
            }
        }
        if(flag==0)
        printf("Case %lld: Impossible\n",cases++);
    }
return 0;
}
