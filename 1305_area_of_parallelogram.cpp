#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#include<iostream>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<string>
#include<set>
#include<bitset>
#include<map>
#include<iterator>
#include<algorithm>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front

int main()
{
    ll t,cases=1,ax,ay,bx,by,cx,cy,dx,dy,area;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);
        dx=ax+cx-bx;
        dy=ay+cy-by;
        area=ax*by+bx*cy+cx*dy+dx*ay-ax*dy-dx*cy-cx*by-bx*ay;
        if(area<0)
            area=area*-1;
        area=0.5*area;
        printf("Case %lld: %lld %lld %lld\n",cases++,dx,dy,area);

    }
    return 0;
}

