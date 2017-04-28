#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string>
#include<string.h>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acsos(0.0)

int main()
{
    double v1,v2,v3,a1,a2,time,t1,t2,s1,s2,s3;
    ll t,cases=1;
    scanf("%lld ",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        t1=v2/a2;
        t2=v1/a1;
        time=max(t1,t2);
        s1=v1*v1/(2*a1);
        s1=fabs(s1);
        s2=v2*v2/(2*a2);
        s2=fabs(s2);
        s3=v3*time;

        printf("Case %lld: %0.6lf %0.6lf\n",cases++,s1+s2,s3);
    }
    return 0;
}
