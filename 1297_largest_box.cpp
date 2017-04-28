#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)
#define mx 1000000
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front

int main()
{
    ll t,cases=1;
    double a,b,c,m,n,l,w,res1,res2,res;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf %lf",&w,&l);
        a=12;
        b=-4.0*(w+l);
        c=w*l;
        res1=(double)(-b+sqrt(b*b-4*a*c))/(2.0*a);
        res2=(double)(-b-sqrt(b*b-4*a*c))/(2.0*a);
        if(res1<res2)
            res=res1;
        else res=res2;
        res=res*(l-2*res)*(w-2*res);
        printf("Case %lld: %lf\n",cases++,res);
    }
    return 0;
}
