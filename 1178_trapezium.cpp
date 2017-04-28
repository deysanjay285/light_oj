#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,cases=1;
    double a,b,c,d,res,h,arm1,arm2,a_c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        arm1=max(a,c);
        arm2=min(a,c);
        a_c=arm1-arm2;
        res=(double)(a_c+b+d)/2.0;
        res=res*(res-a_c)*(res-b)*(res-d);
        res=sqrt(res);
        h=(double)res*2/a_c;
        res=(a+c)/2*h;
        printf("Case %lld: %0.6lf\n",cases++,res);

    }
    return 0;
}
