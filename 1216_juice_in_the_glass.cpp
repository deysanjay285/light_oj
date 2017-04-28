#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<iostream>
#include<string.h>
#include<algorithm>
#include<iterator>
#include<time.h>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define ld long double
#define pi 2*acos(0.0)

int main()
{
    ll t,cases=1;
    double R,r,h,p,x,y,v1,v2,temp;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&R,&r,&h,&p);
        temp=r*h/(R-r)+p;

        x=temp*(R-r)/h;
        v1=(double)1/3*pi*(x*x)*(p+(r*h/(R-r)));
        v2=(double)1/3*pi*(r*r)*(r*h/(R-r));
        printf("Case %lld: %0.6lf\n",cases++,v1-v2);
    }
    return 0;
}
